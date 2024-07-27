[org 0x7c00] ; BIOS loads boot sector at address 0x7c00
mov al, 0
mov ah, 0
mov ds, ax
mov es, ax

;load the kernel
mov si, msg
call print_string
jmp $

print_string:
    mov ah, 0x0e
.repeat:
    lodsb
    cmp al, 0
    je .done 
    int 0x10
    jmp .repeat
.done: 
    ret

msg db 'Booting...', 0

times 510-($-$$) db 0
dw 0xaa55 ;Boot signature
