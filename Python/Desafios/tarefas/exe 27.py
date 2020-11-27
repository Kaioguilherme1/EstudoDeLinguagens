nome = str(input('digite seu nome completo >>>')).strip()
n = nome.split()
print('praser, {} seu ultimo nome e {}'.format(n[0], n[len(n)-1] ))