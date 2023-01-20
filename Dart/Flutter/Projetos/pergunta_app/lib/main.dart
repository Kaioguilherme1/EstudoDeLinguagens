// ignore_for_file: library_private_types_in_public_api

import 'package:flutter/material.dart';
import './questionario.dart';
import './resultado.dart';

void main() => runApp(PerguntaApp());

class _PerguntaAppState extends State<PerguntaApp> {
  int _perguntaSelecionada = 0;
  int _pontuacao = 0;

  //var
  final List<Map<String, Object>> _perguntas = [
    {
      'texto': 'Qual é a sua cor favorita?',
      'resposta': [
        {'texto': 'Verde', 'pontuacao': 3},
        {'texto': 'Vermelho', 'pontuacao': 4},
        {'texto': 'Azul', 'pontuacao': 5},
        {'texto': 'preto', 'pontuacao': 8},
      ],
    },
    {
      'texto': 'Qual é o seu animal favorito?',
      'resposta': [
        {'texto': 'Coelho', 'pontuacao': 8},
        {'texto': 'Cobra', 'pontuacao': 2},
        {'texto': 'Elefante', 'pontuacao': 5},
        {'texto': 'Leão', 'pontuacao': 6},
      ],
    },
    {
      'texto': 'Qual sua linguagem favorita?',
      'resposta': [
        {'texto': 'Java', 'pontuacao': 5},
        {'texto': 'C', 'pontuacao': 6},
        {'texto': 'Python', 'pontuacao': 9},
        {'texto': 'JavaScript', 'pontuacao': 1},
      ],
    }
  ];

  void _responder(int pontuacao) {
    setState(() {
      _perguntaSelecionada++;
      _pontuacao += pontuacao;
    });
    print('pergunta $_perguntaSelecionada');
    print('Pontuacoa = $_pontuacao');
  }

  void _reiniciarQuestionario() {
    setState(() {
      _perguntaSelecionada = 0;
      _pontuacao = 0;
    });
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
              ? Questionario(
                  perguntaSelecionada: _perguntaSelecionada,
                  perguntas: _perguntas,
                  responder: _responder,
                )
              : Resultado(_pontuacao, _reiniciarQuestionario)),
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
