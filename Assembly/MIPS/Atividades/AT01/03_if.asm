.text
    li $s0, 12 #adicionar um valor em determinado registrator
    li $s1, 5

    blt $s0, $s1 else

    else:
        move $s1, $s0 #s1 = s0

