V = float(input('qual a velocidade do seu carro >>>'))
if V <= 80:
    print('PARABEMS! continue assim')
else:
    multa = ((V - 80) * 7)
    print('MULTADO!!! voce ecedeu o limete de velocidade de 80 Km/h')
    print('a multa sera de R$ {} '.format(multa))
