import pymysql
# parametro de conecção
db = pymysql.connect("localhost", "kaio", "2017300310", "test")


cursor = db.cursor()
def vernome(nome):

    cursor.execute("Select nome from cadastro where nome = '%s'" % nome)



    N = str(cursor.fetchone())
    R = len(N)-3
    n = N[2:R]
    print("nome encontrado : %s " % n)
    return n


def versenha(nome):

    cursor.execute("Select senha from cadastro where nome = '%s'" % nome)



    S = str(cursor.fetchone())
    R = len(S)-3
    senha = S[2:R]
    print("senha encontrada : %s " % senha)
    return senha


def cadastra(nome,senha):
    ex = bool
    N = str(vernome(nome))
    print('seu nome',N)
    try:
       if N != nome:
           sql = "INSERT INTO cadastro(nome, \
              senha) \
              VALUES ('%s', '%s')" % \
                 (nome, senha)
           ex = True
           try:
               cursor.execute(sql)

               db.commit()
               print('cadastrado')
               return ex
           except:
               db.rollback()
               print('database erro...')

       else:
        print('esse nome ja existe')
        print('tente novamente')
        ex = False
        return ex
    except:
        print('database 1erro')

def login(login, senha):
    NOME = vernome(login)
    SENHA = versenha(senha)
    log = bool

    if (NOME == login) and (SENHA == senha):
        print('verdadeiro')
        print('{} {}'.format(NOME, SENHA))
        log = True
    else :
        print('falso')
        print(NOME, SENHA)
        print(login, senha)
        log = False


def cadastrar(S1, S2, name):
    try:
        r = cadastra(str(name), str(S2))
        print('name {} senha {}'.format(str(name), str(S1)))
        return r
        print('cadastrado')
    except:
        print('erro no cadastro')




