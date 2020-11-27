maior = 0
menor = 0
for p in range(1,7):
    P = float(input('o peso da {}ª pessoa >>>'.format(p)))
    if p == 1:
        maior = P
        menor = P
    else:
        if P > maior:
            maior = P
        else:
            if P < menor:
                menor = P

print('o maior peso foi {} kg'.format(maior))
print('o menor peso foi {} kg'.format(menor))