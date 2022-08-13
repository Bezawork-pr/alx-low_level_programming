;Author - Bezawork Lindlof
; Hello Holberton
;Date - 13 -Aug - 2022
section .text
	global main
main:
	mov eax, 4 		; call printf function
	mov ebx, 1 		; stdout takes
	mov ecx, string	 	; String defined in section.data
	mov edx, length		;length of string
	int 80h			;system call

	mov eax, 1		;exit
	mov ebx, 0		;exit stdout
	int 80h			;system call

section .data
	string: db "Hello, Holberton", 10
	length: equ 18

