	section .data
fmt:	db "%s", 10, 0
msg:	db "Hello, Holberton", 0

	section .text
	extern printf
	global main
main:
	mov esi, msg		;used site https://montcs.bloomu.edu/~bobmon/Code/Asm.and.C/hello-asms.html
	mov edi, fmt
	mov eax, 0
	call printf
	mov eax, 0
	ret
