# About the Framework

The "Universal Injector Framework" (UIF) is an extensible library that can be used to modify the behavior of existing Windows applications.

# Manual for Users

UIF comes bundled with several features, primarily designed for localization of Japanese games.
The behavior of all features can be enabled and controlled with a `config.json` file located in the same directory as the [proxy dll](#what-is-a-proxy). Some features are mutually exclusive, because any one game function can only be modified by one feature at a time.

The configuration is a [JSON file](https://en.wikipedia.org/wiki/JSON), which is easily readable by both people and machines. All config options must be contained within a root object, denoted by a pair of curly braces.

The following sections will explain all the default features and their configuration options.

- [Injector](#injector)
- [Allocate Console](#allocate-console)
- [Start Suspended](#start-suspended)
- [Character Substitution](#character-substitution)
- [Tunnel Decoder](#tunnel-decoder)
- [Font Manager](#font-manager)
- [Play Timer](#play-timer)

## Injector
This isn't actually a feature, but rather the general configuration for the injector itself (the component that is responsible for managing the other features). The injector currently has two options: `hook_modules` and `load_modules`.

`hook_modules` is an array of names referring to modules loaded by the target executable. When a feature attempts to hook an import, the imported function will be hooked in the main executable as well as in all modules listed here. Make sure this list does not contain the name of your proxy dll, as that would mess with the imports of the injector itself.

`load_modules` is an array of strings, each of which contains the path to a dll file that should be loaded on startup. You might want to hook functions in a dependency of the target executable via `hook_modules`. This will fail if the feature initialization is run before said dependency is loaded, so add it to this list to force it to be loaded before initialization.

```json
{
  "injector": {
    "load_modules": [
      "plugin/EngineHelpers.dll"
    ],
    "hook_modules": [
      "EngineHelpers.dll"
    ]
  }
}
```

## Allocate Console

The first feature is very simple and has just one config option. It opens a console window to display relevant information. It is recommended to enable this feature during testing, but disable it once you distribute the proxy.

When starting the program through the command line, the feature will first attempt to attach to the existing console.

To enable the console allocation, set the option `/allocate_console` to true:

```json
{
  "allocate_console": true
}
```

## Start Suspended

Another fairly simple feature, which simply adds a delay before the target application has a chance to load. This can be used to attach external tools like a debugger or capturing software like [RenderDoc](https://renderdoc.org/), which needs to be injected before the graphics API is initialized.

To enable the feature, set the option `/start_suspended/enable` to true. You can either specify a time to wait (in milliseconds) with the `wait_time` option, or wait for the user to press enter in the console by setting `wait_for_input` to true.

Please note that for the second option to work, you need to enable console allocation. Otherwise the program will wait indefinitely since there is no way to press enter in a nonexisting console.

```json
{
  "start_suspended": {
    "enable": true,
    "wait_time": 3000,
    "wait_for_input": false
  }
}
```

## Character Substitution

This feature allows to replace certain characters by others. It can be used to print characters not supported by the application due to the character set. Many Japanese game engines use the Shift-JIS charset, which doesn't have support for some characters used in the English language.

The character substitution feature can be used to replace supported characters you don't need by characters you _do_ need.

To enable the feature, set the `/character_substitution/enable` option to true. You will also need to set `source_characters` and `target_characters` options to tell the feature which characters should be mapped to which.

The configuration file below would replace all occurrences of `ｱ` by `á`, `ｲ` by `í`, and so on.

```json
{
  "character_substitution": {
    "enable": true,
    "source_characters": "ｱｲｳｴｵ",
    "target_characters": "áíúéó"
  }
}
```

## Tunnel Decoder

The tunnel decoder is a more powerful, but more complicated alternative to the character substitution feature. It implements the Shift-JIS tunnel encoding developed by [arcusmaximus](https://github.com/arcusmaximus/VNTranslationTools), which maps up to 3422 characters to unassigned Shift-JIS codepoints.

To enable the feature, set the `/tunnel_decoder/enable` option to true. Other than that, there is only one option: the `mapping`. This should be the same as returned by the corresponding [tunnel encoder](https://github.com/AtomCrafty/yukatool2/blob/master/src/Yuka.Core/Util/EncodingUtils.cs#L55).

```json
{
  "tunnel_decoder": {
    "enable": true,
    "mapping": "éáäöüß"
  }
}
```

## Font Manager

The font manager is one of the more complicated features and has a lot of options to configure. To enable it, set the `/font_manager/enable` option to true.

### Resource Files
The `resource_files` option accepts an array of strings, each of which refers to a font file on disk. These will be added to the list of fonts available to the application, without the need to install them in Windows.

### Spoofing Enumeration
Some Japanese game engines will filter the fonts available to the player. Which fonts will be listed can be modified by the `spoof_enumeration` sub-feature of the font manager. You can enable it by setting `/font_manager/spoof_enumeration/enable` to true.

When enabled, enumeration spoofing will allow you to define your own filters for which fonts should be available to the engine.

`filter_pitch_and_family` allows you to filter by font pitch type (whether it is monospaced or not) and style (for example only sans-serif fonts).

To only allow monospaced fonts, set the value to 1, for variable pitch set it to 2. To allow both, set it to 0.

For more information read the description of the `iPitchAndFamily` parameter in the [Microsoft Documentation](https://docs.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-createfonta).

`filter_chatset` allows you to only allow fonts, which support a certain character set. Japanese engines often set this to SHIFTJIS_CHARSET (128), which excludes most fonts, since they don't contain kanji.
You probably want this to be either 1 (allow only ansi-compatible fonts), or 0 (allow all fonts).

`spoof_charset` specifies a value that will be reported to the engine as the real charset of each font. This is necessary in case the engine applies its own filter logic to the returned list of fonts. For Japanese engines, this value should likely be 128.

### Spoofing Creation
If you use the `spoof_charset` option mentioned above, you need to enable this sub-feature as well, because the engine will now try to create fonts with the spoofed charset value, which Windows will not accept. In this case, enable this sub-feature by setting `/font_manager/spoof_creation/enable` to true.

The `override_charset` option will be used to override the spoofed charset value from earlier. Basically we lied to the engine, pretending that all fonts support a certain charset, so now the engine will try to load a font with support for a charset it doesn't have. To mitigate this issue, set the `override_charset` option to 0.

Finally there is the `override_face` option, which allows you to override which font will be loaded, no matter what font is requested by the engine.

```json
{
  "font_manager": {
    "enable": true,
    "resource_files": [
      "ARLRDBD.TTF"
    ],
    "spoof_enumeration": {
      "enable": true,
      "filter_pitch_and_family": 0,
      "filter_charset": 1,
      "spoof_charset": 128
    },
    "spoof_creation": {
      "enable": true,
      "override_face": "Arial Rounded MT Bold",
      "override_charset": 0
    }
  }
}
```

## File Monitor
The file monitor feature hooks into the Windows CreateFile API and allows you to perform a number of actions when specific files are accessed. To enable the feature, set the option `/file_monitor/enable` to true.

You can simply log all file accesses to the console by setting the `log_all` option to true, but the primary function is controlled by the `actions` option.
It is an array of objects, where each object specifies a file name filter and an action to apply when a file matching the filter is accessed.

### Filtering
There are two ways of specifying the file name filter. The first option is to declare a `path` property, which contains a file path using Windows wildcard notation (`*` for any string, `?` for any character). Backslash characters are automatically normalized to forward slashes. The matcher will check if the wildcards can be expanded in such a way that the result is a suffix of the accessed file path. In case this is not flexible enough for your needs, the second way is to instead declare a `pattern` property containing a regular expression.

Apart from the file path, you can also filter by the dwDesiredAccess flags by defining the `access` property. The string may contain the characters `r`, `w` and `x` (case insensitive), which match accesses using the `GENERIC_READ`, `GENERIC_WRITE` and `GENERIC_EXECUTE` flags respectively. Omitting the property will ignore the flags.

### Actions
First and foremost, you can log accesses matching the filters by setting the `log` property to true. You can also trigger a software breakpoint (`__debugbreak()`) by setting the `breakpoint` property to true.

Finally, you can redirect the access to a different path by specifying the `redirect` property.
It is used as the format parameter to `std::regex_replace` and can contain back-references (`$1`) to capture groups defined in the filter pattern. If the `path` property was used instead of `pattern`, capture group 1 refers to the wildcard-expanded path (excluding any prefix not part of the filter path).

```json
{
  "file_monitor": {
    "enable": true,
    "log_all": false,
    "actions": [
      {
        "path": "*.png",
        "log": true,
        "breakpoint": false
      },
      {
        "pattern": "^.*config\\/(.*)$",
        "access": "w",
        "redirect": "config-sink/$1"
      }
    ]
  }
}
```

## Play Timer
The play timer allows you to track how long a particular application has been running.
It creates a separate file containing a list of all sessions with their duration as well as start and end times, as well as a cumulative total.

To enable the play timer, set the option `/play_timer/enable` to true. By default, the play time information will be written to `play_timer.json`, but the file location can be changed with the `save_file_path` option.

The play timer will automatically update this file every time the application exits. In addition to this, you can enable the auto save sub-feature by setting `/play_timer/auto_save/enable` to true. This will update the save file every 60 seconds. The number of seconds between saves can be changed with the `interval` option.

The auto save feature is useful in case the application crashes, because then the current session's time would otherwise be lost. The play timer will automatically recover and synchronize the information on the next start.

```json
{
  "play_timer": {
    "enable": true,
    "save_file_path": "playtime.json",
    "auto_save": {
      "enable": true,
      "interval": 10
    }
  }
}
```

# Manual for Developers

## Building

UIF comes as a Visual Studio solution, so building should be as simple as loading it in VS and hitting build.

Make sure to select the build configuration applicable to your chosen [proxy](#what-is-a-proxy) and the correct target platform.
If none of the provided proxies suit your needs, you will need to [add your own one](#creating-new-proxies).

The generated library will be located in `src\Build\UniversalInjectorFramework\$(Platform)\$(Configuration)\`

## Debugging

It is possible to run your target application right inside of Visual Studio, which allows you to debug your injected code while it is running in the target process.
To do this, create a symbolic link to your proxy dll inside the target application's directory (for example with [Link Shell Extension](https://schinagl.priv.at/nt/hardlinkshellext/linkshellextension.html)). This way the app is always going to load the most recent build of the dll.
Next, open the project properties dialog, navigate to the "Debugging" tab and set the "Command" and "Working Directory" fields to the path of your target application and its containing directory respectively.

Now you can simply set a breakpoint and start the program through the VS Debugger.

## Features

All feature implementations are located inside the "features" directory and are derived from the `feature_base` class. They provide an `initialize` and a `finalize` method, which are invoked when the dll is loaded and unloaded respectively.

The `initialize` method will usually parse the feature configuration and install any hooks required for it to work.

The `finalize` method should make sure to uninstall all hooks added during initialization.

When adding a new feature, make sure to add a call to `initialize_feature` in `injector::attach`.

## Proxies

### What is a proxy?
A proxy library is a .dll (dynamic link library) file that pretends to be a dependency of your target application.  
When the application starts, the Windows image loader loads all libraries the program requires to function. By placing our proxy dll in the same directory as the executable, it shadows the actual file and will be loaded instead.  
This allows us to execute our own code within the application process.

Since the application tried to load the original library in order to import some of its functions, our proxy dll will need to export these functions or the process will be unable to start.

UIF can mimic the following Windows dlls by default:

- d3d8.dll
- d3d9.dll
- d3d11.dll
- d3dcompiler_47.dll
- dxgi.dll
- opengl.dll

If your target application doesn't depend on any of these, you will need to add another proxy using the following steps:

### Creating new proxies

To create a new proxy, build the included "ProxyGenerator" project and run `ProxyGenerator.exe library.dll`, where "library.dll" is the library you want to generate a proxy for.
This will generate three files (.h, .cpp and .def), which you need to copy to `src/UniversalInjectorFramework/proxies` and add to the project within Visual Studio.

Next, open `libraries.cpp`, include the newly added header and add new `load_library` and `unload_library` calls to the existing ones.

Now you need to create a build configuration for the new proxy. Open the Visual Studio Configuration Manager located in the "Build" menu, click on the dropdown in the top left and choose "New...". Enter the name of your dll file (without the extension) in the Name field and select one of the existing configurations to copy from.

Finally, we need to add some custom settings to the project file. Right click the "UniversalInjectorFramework" project (not the solution itself!) in the Solution Explorer and choose "Unload project". This should open the XML project file in the editor.

Find the section labeled `<!-- configurations -->` and add the following XML snippet:

```xml
  <ItemDefinitionGroup Condition="'$(Configuration)'=='yourlibname'">
    <ClCompile>
      <PreprocessorDefinitions>UIF_LIB_YOURLIBNAME;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ClCompile>
    <Link>
      <ModuleDefinitionFile>proxies\yourlibname.def</ModuleDefinitionFile>
    </Link>
  </ItemDefinitionGroup>
```

Make sure the first `yourlibname` exactly matches the name of the build configuration and the last one is the name of the .def file you copied earlier.
The second `YOURLIBNAME` should be the same string, but with all lowercase letters replaced by uppercase ones. The whole string `UIF_LIB_YOURLIBNAME` must be the same as in line 3 of the .cpp file we generated at the start.

Now load the project again and you are ready to continue with the steps described in [the build section](#building).