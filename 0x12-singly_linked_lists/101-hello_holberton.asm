;; assembly code to print something to the screen
;; expected output -> Hello, Holberton\n

section .data:
	message: db "Hello, Holberton", 0
	msg_fmt: db "%s", 10, 0

section .text:
	extern printf
	global main

main:
	mov esi, message
	mov edi, msg_fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
