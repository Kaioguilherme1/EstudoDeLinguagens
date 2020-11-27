s = 0
co = 0
for c in range(1,7):
    n =int(input('digite um valor'))
    if n % 2 == 0:
        s += n
        co += 1
print('você informou {} numeros pares e sua soma e igual a {}'.format(co,s))
