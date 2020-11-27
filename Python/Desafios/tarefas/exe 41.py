import datetime
id = int(input('digite o ano d nascimento >>>'))
ano = datetime.date.today().year
idade = ano - id
def i():
    print('você tem {} anos'.format(idade))
def c(classificação):
    print('você e um atleta {}'.format(classificação))


if (idade < 9):
    i()
    c('mirin')
elif (idade >9 and idade <14):
    i()
    c('infantil')
elif (idade > 14 and idade < 19):
    i()
    c('junior')
elif (idade >19 and idade < 25):
    i()
    c('senior')
else:
    i()
    c('master')

