.data

    #Área para dados da memoria principal
    msg: .asciiz"Óla, mundo" # Mensagem a ser exibida

.text
    #programa principal
    li $v0 ,4
    la $a0 , msg
    syscall
