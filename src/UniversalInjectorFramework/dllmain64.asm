.CODE
ALIGN 16
EXTERN Attach : PROC
EXTERN ExeEntryPoint : QWORD

ExeEntryPointHook PROC
	call Attach
	jmp ExeEntryPoint
ExeEntryPointHook ENDP

END