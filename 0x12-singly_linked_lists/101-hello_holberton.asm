section .text
	extern printf
	global main

main:
	mov edi, format
	mov eax, 0
	call printf

	mov eax, 0
	ret

section .data
	format db "Hello, Holberton", 0xa, 0
