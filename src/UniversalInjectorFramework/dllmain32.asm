.686P
.MODEL FLAT, C

.CODE
ALIGN 8
EXTERN Attach : PROC
EXTERN EntryPoint : DWORD

EntryPointHook PROC
	call Attach
	jmp EntryPoint
EntryPointHook ENDP

END