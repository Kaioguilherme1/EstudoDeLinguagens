# program Hello World

.data

msg: .asciiz "Hello World!"

.text
.globl main

main:
li $v0, 4   # print(?)
la $a0, msg #? -> a0

syscall     #executa

li $v0, 10 # finalizar programa
syscall