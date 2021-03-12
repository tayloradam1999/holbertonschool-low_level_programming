SECTION .data
msg:	db "Hello, Holberton", 10

	SECTION .text
	global main
main:
	mov dex, 17
	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	int 0x80

	mov ebx, 0
	mob eax, 1
	int 0x80
