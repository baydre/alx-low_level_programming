; File: 101-hello_holberton.asm
; Auth: baydre
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.

		 section .data
msg:		 db 'Hello, Holberton', 0
fmt:   		 db '%s', 10, 0     ; format string for printf

		 section .text
    extern printf          ; declare printf as an external function
    global main

main:
    	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
format: db `Hello, Holberton\n`,0
