# computar a soma de numeros 1 + 2 + 3 + n -> pa 

.text 
.globl main

main:
#obter o n do usuario
li $v0, 5
syscall

move $t0, $v0 # t0 = v0

#iniciar contadores 
# i
li $t1, 0
# armazenar o resultado da soma 
li $t2, 0

#loop -> goto la em c
#while(i <= n){
# s = i + s 
# i++ }

loop:

    add $t2, $t2, $t1  # t2 = r1 + t2
    addi $t1, $t1, 1   # t1 = t1 + 1
    beq $t0, $t1, exit # i == n fim do loop
    j loop             # i < n executa loop

exit:
    #imprime o resultado #
    li $v0, 1 
    move $a0, $t2 
    syscall
    
    li $v0, 10 # finaliza o programa
    syscall









