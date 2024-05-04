#pragma once
#include <bitset>

#include "_feature_base.h"

namespace uif::features
{
	class text_processor final : public feature_base
	{
	public:
		explicit text_processor(uif::injector& injector) : feature_base(injector, "text_processor") {}
		void initialize() override;
		void finalize() override;

		enum class api
		{
			IsDBCSLeadByte,
			IsDBCSLeadByteEx,
			MultiByteToWideChar,

			GetGlyphOutlineA,
			GetGlyphOutlineW,
			GetTextExtentExPointA,
			GetTextExtentExPointW,
			GetTextExtentPoint32A,
			GetTextExtentPoint32W,
			GetTextExtentPointA,
			GetTextExtentPointW,
			TextOutA,
			TextOutW,
			ExtTextOutA,
			ExtTextOutW,

			AppendMenuA,
			AppendMenuW,
			InsertMenuA,
			InsertMenuW,
			InsertMenuItemA,
			InsertMenuItemW,
			ModifyMenuA,
			ModifyMenuW,
			SetMenuItemInfoA,
			SetMenuItemInfoW,

			SetDlgItemTextA,
			SetDlgItemTextW,

			DrawTextA,
			DrawTextW,
			DrawTextExA,
			DrawTextExW,
			GrayStringA,
			GrayStringW,
			TabbedTextOutA,
			TabbedTextOutW,

			MessageBoxA,
			MessageBoxW,
			MessageBoxExA,
			MessageBoxExW,
			MessageBoxIndirectA,
			MessageBoxIndirectW,

			DefWindowProcA,
			DefWindowProcW,
			DefDlgProcA,
			DefDlgProcW,

			NCCREATE,
			SETTEXT,

			N
		};

		static constexpr size_t api_count = static_cast<size_t>(api::N);
		typedef std::bitset<api_count> api_mask;

		struct api_descriptor
		{
			api api;
			const char* name;
			void* hook;
			UINT msg;
			bool needs_conversion;
		};

		struct api_set
		{
			std::string name;
			api_mask mask;
		};

		class processing_rule
		{
		public:
			api_mask mask{};

			explicit processing_rule(const api_mask& mask)
				: mask(mask)
			{ }

			bool applies_to_api(api api) const
			{
				return mask.test(static_cast<size_t>(api));
			}

			virtual bool process(std::wstring& value) = 0;
			virtual ~processing_rule() = default;

			processing_rule() = default;
			processing_rule(const processing_rule&) = delete;
			processing_rule(const processing_rule&&) = delete;
			processing_rule& operator=(processing_rule const&) = delete;
			processing_rule& operator=(processing_rule const&&) = delete;
		};

		static const std::array<api_descriptor, api_count> api_descriptors;
		static const std::vector<api_set> default_api_sets;

		int conversion_codepage;
		bool use_tunnel_decoder;
		std::wstring tunnel_mapping{};

		api_mask enabled_apis{};
		std::vector<api_set> custom_api_sets;
		std::vector<processing_rule*> rules{};

		bool is_api_enabled(api api) const;
		bool enable_api(api api);
		bool disable_api(api api);
		void set_enabled_apis(api_mask mask);

		std::wstring convert(const std::string& value, api api) const;
		std::wstring convert(const std::wstring& value, api api) const;
		std::wstring process(const std::string& value, api api) const;
		std::wstring process(const std::wstring& value, api api) const;
		std::optional<std::wstring> process(const char* value, api api) const;
		std::optional<std::wstring> process(const wchar_t* value, api api) const;

	private:
		static std::vector<std::wstring> parse_strings(const nlohmann::basic_json<>& value);
		processing_rule* parse_rule(const nlohmann::basic_json<>& rule) const;
		api_mask parse_mask(const nlohmann::basic_json<>& value);
		void parse_mask(const nlohmann::basic_json<>& value, api_mask& mask);
	};
}