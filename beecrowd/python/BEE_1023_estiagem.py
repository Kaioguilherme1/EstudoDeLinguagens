#auth kaio Guilherme
city = {}
home = []
houses = []

num = 0

while True:
    num_cases = int(input(""))
    if(num_cases == 0):
        break
    else:
        num += 1
        for i in range(0, num_cases):
            entry = input("")
            home = (entry.split(" "))
            home = list(map(int, home))
            houses.append(home)

        city[num] = houses
        
