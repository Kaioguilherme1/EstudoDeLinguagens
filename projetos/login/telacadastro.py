
import Fan
from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(500, 367)

        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")

        self.Bcad = QtWidgets.QPushButton(self.centralwidget)
        self.Bcad.setGeometry(QtCore.QRect(180, 200, 101, 23))
        self.Bcad.setObjectName("Bcad")
        self.Bcad.clicked.connect(self.cad)

        self.nome = QtWidgets.QLineEdit(self.centralwidget)
        self.nome.setGeometry(QtCore.QRect(150, 90, 171, 20))
        self.nome.setObjectName("nome")

        self.Senha1 = QtWidgets.QLineEdit(self.centralwidget)
        self.Senha1.setGeometry(QtCore.QRect(150, 120, 171, 20))
        self.Senha1.setObjectName("Senha1")

        self.Senha2 = QtWidgets.QLineEdit(self.centralwidget)
        self.Senha2.setGeometry(QtCore.QRect(150, 150, 171, 20))
        self.Senha2.setObjectName("Senha2")

        self.Lnome = QtWidgets.QLabel(self.centralwidget)
        self.Lnome.setGeometry(QtCore.QRect(50, 90, 91, 20))
        self.Lnome.setObjectName("Lnome")

        self.LSenha1 = QtWidgets.QLabel(self.centralwidget)
        self.LSenha1.setGeometry(QtCore.QRect(60, 120, 91, 20))
        self.LSenha1.setObjectName("LSenha1")

        self.lsenha2 = QtWidgets.QLabel(self.centralwidget)
        self.lsenha2.setGeometry(QtCore.QRect(60, 150, 81, 20))
        self.lsenha2.setObjectName("lsenha2")

        MainWindow.setCentralWidget(self.centralwidget)

        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 500, 21))
        self.menubar.setObjectName("menubar")

        self.menuarquivo = QtWidgets.QMenu(self.menubar)
        self.menuarquivo.setObjectName("menuarquivo")

        self.menuedita = QtWidgets.QMenu(self.menubar)
        self.menuedita.setObjectName("menuedita")

        self.menuview = QtWidgets.QMenu(self.menubar)
        self.menuview.setObjectName("menuview")

        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")

        MainWindow.setStatusBar(self.statusbar)
        self.menuarquivo.addSeparator()

        self.menubar.addAction(self.menuarquivo.menuAction())
        self.menubar.addAction(self.menuedita.menuAction())
        self.menubar.addAction(self.menuview.menuAction())

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)
    def cad(self):
        try:

            s1 = str(self.Senha1.text())
            s2 = str(self.Senha2.text())
            nome = str(self.nome.text())
            if s1 == s2:
               ex = Fan.cadastrar(s1,s2,nome)
               if ex == False:
                   print('essa conta ja essite')
                   m = 'Esse Usuario ja exste tente outro nome'
                   self.nome.setText(m)
               else:
                   print('ok')
            else:
                txt = 'digite a mesma senha'
                self.Senha2.setText(txt)
                print('senha invalida')
        except:
            print('erro....')





    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "Tela de Cadastro"))
        self.Bcad.setText(_translate("MainWindow", "cadastra"))
        self.Senha2.setText(_translate("MainWindow", "digite a senha novamente"))
        self.Lnome.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\">nome de usuario</p></body></html>"))
        self.LSenha1.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\">Digite a senha</p></body></html>"))
        self.lsenha2.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\">Digite a senha</p><p align=\"center\"><br/></p></body></html>"))
        self.menuarquivo.setTitle(_translate("MainWindow", "arquivo"))
        self.menuedita.setTitle(_translate("MainWindow", "edita"))
        self.menuview.setTitle(_translate("MainWindow", "view"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())

