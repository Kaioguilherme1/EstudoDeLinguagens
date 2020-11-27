n = int(input('digite um numero >>>'))
tot = 0
for c in range(1, n+1):
    if n % c == 0:
        print('\033[34m',end=' ')
        tot += 1
    else:
        print('\033[m', end=' ')
    print(c,end=' ')
    print(' ')
print('o numero {} foi divisivel {} vezes'.format(n,tot))
if tot == 2:
    print('ou seja e um numero primo')
else:
    print('ou seja não e um numero primo')