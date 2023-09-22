isection .data
    hello db "Hello, Holberton",10  ; The string to be printed

section .text
    global _start

_start:
    ; Write the message to stdout
    mov eax, 4                   ; The sys_write syscall number
    mov ebx, 1                   ; File descriptor (stdout)
    mov ecx, hello               ; Pointer to the message
    mov edx, 18                  ; Length of the message
    int 0x80                     ; Call the kernel

    ; Exit the program
    mov eax, 1                   ; The sys_exit syscall number
    xor ebx, ebx                 ; Exit status (0)
    int 0x80                     ; Call the kernel
