section .text
	global main

section .data
	message: db "Hello, World", 0xA
	message_length equ $-message

main:
	mov eax, 0x4		; use the write syscall
	mov ebx, 1		; use stdout as the file description
	mov ecx, message	; use the message as the buffer
	mov edx, message_length ; and supply the length
	int 0x80		; invoke the syscall

	mov eax, 0x1
	mov ebx, 0
	int 0x80
