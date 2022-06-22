#AUTH Kaio Guilherme
# Calculadora em Python

# Desenvolva uma calculadora em Python com tudo que você aprendeu nos capítulos 2 e 3. 
# A solução será apresentada no próximo capítulo!
# Assista o vídeo com a execução do programa!



print("\n******************* Python Calculator *******************")
print("1 - soma \n2 - subtração \n3 - multiplicação \n4 - divisao \n")

seletor = int(input("Selecione o número da operação desejada: "))
x = int(input("\nDigite o primeiro número: "))
y = int(input("\nDigite o segundo número: "))


if(seletor == 1):
    print("{} + {} = {}".format(x,y,x+y))
elif(seletor == 2):
    print("{} - {} = {}".format(x,y,x-y))
elif(seletor == 3):
    print("{} x {} = {}".format(x,y,x*y))
elif(seletor == 4):
    print("{} / {} = {}".format(x, y, x/y))

