
global main
extern printf

section .text
main:

    push rbp
    mov rbp, rsp
    mov rsi, msg
    mov rdi, fmt
    xor rax, rax
    call printf
    xor rax, rax
    pop rbp
    ret


section .data
    msg: db "Hello, Holberton", 0
    fmt: db "%s", 10, 0
