dosseg
.model small
.stack 100h
.data
V1 db ?
v2 db '?'
v3 db 1
v4 db '1'
v6 db 255
v7 db '255'
v8 db 'UBIT$' 
.code
main proc
mov si,@data
mov ds,si
mov ah,9
mov dx,offset v8
int 21h


mov ah,4ch
int 21h
main endp
end main

