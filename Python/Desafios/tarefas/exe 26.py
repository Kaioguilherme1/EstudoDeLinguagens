frase =str(input('digite uma frase >>>')).strip()
print('a letra A apareceu {} vezes'.format(frase.upper().count('A')))
print('a primeira letra A apareceu na {} posição'.format(frase.upper().find('A')+ 1))
print('a ultima posição que A apareceu foi {}'.format(frase.upper().rfind('A')))