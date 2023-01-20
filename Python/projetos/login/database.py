

import pymysql


db = pymysql.connect("localhost", "kaio", "2017300310", "test")

cursor = db.cursor()

def vernome(nome):

    cursor.execute("Select nome from cadastro where nome = '%s'" % nome)



    N = cursor.fetchone()
    print("nome encontrado : %s " % N)
    return N


def versenha(nome):

    cursor.execute("Select senha from cadastro where nome = '%s'" % nome)



    S = cursor.fetchone()
    print("senha encontrada : %s " % S)


def cadastrar(nome,senha):

    N = str(vernome(nome))
    print('seu nome',N)
    try:
       if N != "('{}',)".format(nome):
           sql = "INSERT INTO cadastro(nome, \
              senha) \
              VALUES ('%s', '%s')" % \
                 (nome, senha)
           try:
               cursor.execute(sql)

               db.commit()
               print('cadastrado')
           except:
               db.rollback()
               print('database erro...')

       else:
        print('esse nome ja existe')
        print('tente novamente')
    except:
        print('database 1erro')




db.close()