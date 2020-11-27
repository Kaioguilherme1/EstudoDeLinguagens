nome =str(input('digite seu nome >>>')).strip()
print('seu nome em maiuscular',nome.upper())
print('seu nome em minusculo',nome.lower())
print('seu nome tem {} letra'.format(len(nome)-nome.count(' ')))
print('seu primeiro nome tem {} letras'.format(nome.find(' ')))
#split separa em uma lista