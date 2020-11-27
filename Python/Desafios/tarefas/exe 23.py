numero = int(input('dgite um numero >>>'))
u = numero // 1 % 10
d = numero // 10 % 10
c = numero // 100 % 10
m = numero // 1000 %10

print('analisando o nuumero ',numero)
print('seu numero tem {} digitos'.format(u,))
print('seu numero tem {} dezenas'.format(d, ))
print('seu numero tem {} centenas'.format(c,))
print('seu numero tem {} milhares'.format(m,))