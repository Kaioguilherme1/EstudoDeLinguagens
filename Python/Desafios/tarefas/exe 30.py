n = int(input('digite um numero quaquer >>>'))
R = n % 2
if R == 1:
    print('{} e um numero impar'.format(n))
else:
    print('{} e um numero par'.format(n))