# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'telalogin.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!
import PyQt5
from PyQt5 import QtCore, QtGui, QtWidgets
import Fan
import database
class Ui_Frame(object):
    def setupUi(self, Frame):
        Frame.setObjectName("Frame")
        Frame.resize(573, 405)

        self.Elogin = QtWidgets.QLineEdit(Frame)
        self.Elogin.setGeometry(QtCore.QRect(200, 140, 191, 20))
        self.Elogin.setObjectName("Elogin")

        self.Esenha = QtWidgets.QLineEdit(Frame)
        self.Esenha.setGeometry(QtCore.QRect(200, 180, 191, 20))
        self.Esenha.setObjectName("Esenha")

        self.login = QtWidgets.QLabel(Frame)
        self.login.setGeometry(QtCore.QRect(140, 140, 51, 21))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.login.setFont(font)
        self.login.setObjectName("login")

        self.login_2 = QtWidgets.QLabel(Frame)
        self.login_2.setGeometry(QtCore.QRect(140, 180, 51, 21))
        font = QtGui.QFont()
        font.setPointSize(12)
        self.login_2.setFont(font)
        self.login_2.setObjectName("login_2")

        self.Cad = QtWidgets.QPushButton(Frame)
        self.Cad.setGeometry(QtCore.QRect(240, 220, 101, 23))
        self.Cad.setObjectName("Cad")

        self.Btok = QtWidgets.QPushButton(Frame)
        self.Btok.setGeometry(QtCore.QRect(410, 370, 75, 23))
        self.Btok.setObjectName("Btok")
        self.Btok.clicked.connect(self.ok)

        self.cancelar = QtWidgets.QPushButton(Frame)
        self.cancelar.setGeometry(QtCore.QRect(490, 370, 75, 23))
        self.cancelar.setObjectName("cancelar")
        self.cancelar.clicked.connect(self.fecha)

        self.retranslateUi(Frame)
        QtCore.QMetaObject.connectSlotsByName(Frame)

    def ok(self):
      try:
       l = str(self.Elogin.text())
       s = str(self.Esenha.text())

       log = Fan.login(l , s)
       print(log)
      except:
          print('erro....')
          print('{} {}'.format(l,s))




    def fecha(self):
        exit(0)




    def retranslateUi(self, Frame):
        _translate = QtCore.QCoreApplication.translate
        Frame.setWindowTitle(_translate("Frame", "Login"))
        self.login.setText(_translate("Frame", "LOGIN"))
        self.login_2.setText(_translate("Frame", "SENHA"))
        self.Cad.setText(_translate("Frame", "CADASTRA-SE"))
        self.Btok.setText(_translate("Frame", "ok"))
        self.cancelar.setText(_translate("Frame", "cancelar"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    Frame = QtWidgets.QFrame()
    ui = Ui_Frame()
    ui.setupUi(Frame)
    Frame.show()
    sys.exit(app.exec_())

