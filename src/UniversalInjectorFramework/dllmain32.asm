.686P
.MODEL FLAT, C

.CODE
ALIGN 8
EXTERN Attach : PROC
EXTERN ExeEntryPoint : DWORD

ExeEntryPointHook PROC
	call Attach
	jmp ExeEntryPoint
ExeEntryPointHook ENDP

END