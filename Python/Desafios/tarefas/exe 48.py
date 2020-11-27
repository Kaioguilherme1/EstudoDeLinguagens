s = 0
v = 0
for c in range(1,501):
    if (c % 2 == 1):
        if c % 3 == 0:
            v += 1
            s += c
print('a soma de todos os {} valores e igual a {}'.format(v,s))