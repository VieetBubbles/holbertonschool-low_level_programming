	section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	section .text
	extern printf
	global main
main:
	mov exd, msg1
	mov esi, 1
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
