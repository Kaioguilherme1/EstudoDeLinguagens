.text
    li $s0, 12 #adicionar um valor em determinado registrator
    li $s1, 5

    add $t0, $s0, $s0 # t0 = s0 + s0
    add $t1, $s0, $s1 
    sub $t2, $t0, $t1 # t2 = t0 + t1
