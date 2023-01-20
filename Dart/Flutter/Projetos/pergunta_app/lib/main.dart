// ignore_for_file: library_private_types_in_public_api

import 'package:flutter/material.dart';
import './questionario.dart';
import './resultado.dart';

void main() => runApp(PerguntaApp());

class _PerguntaAppState extends State<PerguntaApp> {
  var _perguntaSelecionada = 0;

  //var
  final List<Map<String, Object>> _perguntas = [
    {
      'texto': 'Qual é a sua cor favorita?',
      'resposta': ['Verde', 'Vermelho', 'Azul', 'preto']
    },
    {
      'texto': 'Qual é o seu animal favorito?',
      'resposta': ['Coelho', 'Cobra', 'Elefante', 'Leão']
    },
    {
      'texto': 'Qual sua linguagem favorita?',
      'resposta': ['Java', 'C', 'Python', 'JavaScript']
    }
  ];

  void _responder() {
    setState(() {
      temPerguntaSelecionada
          ? _perguntaSelecionada++
          // ignore: avoid_print
          : print('não ha mais perguntas');
    });
    print('pergunta $_perguntaSelecionada');
  }

  bool get temPerguntaSelecionada {
    return _perguntaSelecionada < _perguntas.length;
  }

  @override
  Widget build(BuildContext context) {

    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Perguntas'),
        ),
        body: temPerguntaSelecionada 
        ? Questionario(_perguntas, _perguntaSelecionada, _responder)
        : const Resultado()
      ),
    );
  }
}

// ignore: must_be_immutable
class PerguntaApp extends StatefulWidget {
  const PerguntaApp({super.key});

  @override
  _PerguntaAppState createState() {
    return _PerguntaAppState();
  }
}
