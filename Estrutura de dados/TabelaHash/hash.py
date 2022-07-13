#Author: Kaio Guilherme
class hashtable:
    def __init__(self, maxsize):
        self.list = [[] for _ in range(maxsize)]
        self.maxsize = maxsize
        self.size = 0
        

    def __hashFunc(self, key):
        soma = 0
        for i in range(len(key)-1):
            soma = soma + ord(key[i])
        return soma % self.maxsize  
    
    def getTable(self):
        return self.list

    def insert(self, key, value):
        if self.size < self.maxsize:
            hash_key = self.__hashFunc(key)
            key_exists = False
            bucket = self.list[hash_key]
            for i, kv in enumerate(bucket):
                k, v = kv
                if key == k:
                    key_exists = True
                break

            if key_exists:
                bucket[i] = ((key, value))
            else:
                bucket.append((key, value))
        else:
            print("Hash Full")

    def delete(self, key):
        hash_key = self.__hashFunc(key)
        key_exists = False
        bucket = self.list[hash_key]
        for i, kv in enumerate(bucket):
            k, v = kv
            if key == k:
                key_exists = True
                break
        if key_exists:
            del bucket[i]
            print('Key {} deleted'.format(key))
        else:
            print('Key {} not found'.format(key))

    def get(self, key):
        hash_key = self.__hashFunc(key)
        key_exists = False
        bucket = self.list[hash_key]
        for i, kv in enumerate(bucket):
            k, v = kv
            if key == k:
                key_exists = True
                break
        if key_exists:
            return bucket[i]
        else:
            print('Key {} not found'.format(key))
    
    def printHashTable(self):
        print("|========================|")
        print("|       Hash table       |")
        print("|========================|")
        for bucket in self.list:
                for i in bucket:
                    print("| {:<12} |   {:<4}  |".format(i[0], i[1]))
        print("|========================|")
        print("| max size: {:<2} | size: {:<2}|".format(self.maxsize, self.size))
        print("|========================|")





tabela = hashtable(10)

tabela.insert("ana", 9.2)
tabela.insert("Lisa", 2.5)
tabela.insert("Carlos", 6.4)
tabela.insert("maria", 7.9)
tabela.insert("Jordan", 8.5)
tabela.insert("John", 9.5)
tabela.insert("jorge", 8.5)


print(tabela.getTable())
print("Buscar key ana")
print(tabela.get("ana"))
tabela.printHashTable()
tabela.delete("Jordan")
tabela.printHashTable()