section .data
    hello db "Hello, Holberton",10  ; The message with a newline character
    hello_len equ $ - hello          ; Calculate the message length

section .text
    global _start

_start:
    ; Prepare arguments for the write system call
    mov rax, 1                  ; syscall number for write (1)
    mov rdi, 1                  ; file descriptor 1 (stdout)
    mov rsi, hello              ; pointer to the message
    mov rdx, hello_len          ; message length
    syscall                     ; invoke the syscall

    ; Exit the program
    mov rax, 60                 ; syscall number for exit (60)
    xor rdi, rdi                ; exit status (0)
    syscall                     ; invoke the syscall
