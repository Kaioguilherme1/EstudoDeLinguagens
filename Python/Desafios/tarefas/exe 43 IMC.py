P = float(input('qual seu peso (kg) >'))
H = float(input('qual sua altura (m) >'))
i = P/ (H ** 2)
def e(estado):
    print('o seu IMC e {:.f2}'.format(i))
    print('você esta {}'.format(estado))


if i < 18.5:
    e('abaixo do peso')
elif 18.5 < i < 25:
    e('peso ideal')
elif 25 < i < 30:
    e('acima do peso')
elif 30 < i < 40:
    e('obesidade')
else:
    e('obesidade morbida')
