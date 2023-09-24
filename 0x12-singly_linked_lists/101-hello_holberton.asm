section .data
    format db "Hello, Holberton",10,0  ; The format string with a newline character and null-terminated

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    call printf
    pop rbp
    ret
