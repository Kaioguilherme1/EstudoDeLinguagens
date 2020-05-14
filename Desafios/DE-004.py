#Faça um programa que leia algo pelo teclado é mostre na tela
# o seu tipo primitivo e todas as informações possiveis spbre ele
#================================================================
n = input("digite algo >>>")
print("você digitou algo da clase: {}".format(type(n)))
print("Isso e numerico? {}".format(n.isalnum()))
print("isso é alfabetico? {}.".format(n.isalpha()))
print("É somente espaço? {}".format(n.isspace()))
print("É alphanumerico? {}".format(n.isalnum()))
print("Esta em mmaiusculo? {}".format(n.isupper()))
print('Esta em minusculo ? {}'.format(n.islower()))
print("Esta capitalizado ? {}".format(n.istitle()))
