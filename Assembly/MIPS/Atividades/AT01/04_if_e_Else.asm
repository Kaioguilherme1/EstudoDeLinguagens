.text
    li $s0, 12 #adicionar um valor em determinado registrator
    li $s1, 5

    bgt $s0, $s1 else #s0 > s1
    move $s1, $s0 #s1 = s0
    
    else:
        addi $s0, $s0, 1 #s1 = s1 + 1
