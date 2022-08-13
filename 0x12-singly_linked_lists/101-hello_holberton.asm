;Author - Bezawork Lindlof
; Hello Holberton
;Date - 13 -Aug - 2022
section .text
	global main
main:
	mov rax, 1 		; call printf function
	mov rdi, 1 		; stdout takes
	mov rsi, string	 	; String defined in section.data
	mov rdx, length		;length of string
	syscall			;system call

	mov rax, 60		;exit
	mov rdi, 0		;exit stdout
	syscall			;system call

section .data
	string: db "Hello, Holberton", 10
	length: equ 17

