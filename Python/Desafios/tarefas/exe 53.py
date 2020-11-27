from datetime import date
m =0
me =0
for c in range(1,8):
    i = int(input('que ano a {}ª pessoa nasceu ? >>>'.format(c)))
    ano = int(date.today().year)
    idade = ano - i
    if idade > 18:
        m += 1
    else:
        me += 1
print('{} pessoas são maiores de idade'.format(m))
print('{} pessoas são menores de idade'.format(me))
print(idade)