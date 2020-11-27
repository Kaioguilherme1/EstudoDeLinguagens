n = int(input('digite um numero para converte >>> '))
print('[ 1 ] converte para BINATRIO')
print('[ 2 ] converte para OCTAL')
print('[ 3 ] converte para HEXADECIMAL')
e = int(input('digite sua escolha >>>'))
if e == 1:
    print('{} em Binario e {}'.format(n, bin(n)[2:]))
elif e == 2:
    print('{} em octal e {}'.format(n, oct(n)[2:]))
elif e == 3:
    print('{} em hexadecimal e {}'.format(n, hex(n)[2:]))
else:
    print('opção invaalida tente novamente')