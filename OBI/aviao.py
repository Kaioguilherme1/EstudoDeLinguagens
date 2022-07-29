
alfabeto = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

entry = input("")
comand_char = entry.split(" ")
comands = list(map(int, comand_char))

fileira = comands[0]
assento = comands[1]
Economica = comands[2]
num_fila = comands[3]
        
if (num_fila > (fileira-Economica)*assento): 
    print("PROXIMO VOO")
else:
    print("{} {}".format( int(Economica + (num_fila-1)/assento), alfabeto[(num_fila-1) % assento]))