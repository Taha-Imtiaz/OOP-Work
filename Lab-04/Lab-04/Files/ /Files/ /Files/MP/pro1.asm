dosseg
.model small
.stack 100h
.data
.code
main proc
mov ah,2
mov dl,3
int 21h
mov ah,4ch
int 21h
main endp
end main