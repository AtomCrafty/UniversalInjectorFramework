.CODE
ALIGN 16
EXTERN Attach : PROC
EXTERN EntryPoint : QWORD

EntryPointHook PROC
	call Attach
	jmp EntryPoint
EntryPointHook ENDP

END