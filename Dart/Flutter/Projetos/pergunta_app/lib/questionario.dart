import 'package:flutter/material.dart';
import './questao.dart';
import './resposta.dart';

class Questionario extends StatelessWidget {
  /// Questionario(Perguntas, selecionador, função resposta)
  final List<Map<String, Object>> perguntas;
  final int perguntaSelecionada;
  final void Function(int) responder;

  const Questionario({super.key, 
    required this.perguntas, 
    required this.perguntaSelecionada,
    required this.responder,
});

  
  @override
  Widget build(BuildContext context) {
    return Column(
          // ignore: prefer_const_literals_to_create_immutables

          children: <Widget>[
            Questao(perguntas[perguntaSelecionada]['texto'].toString()),
            Resposta(perguntas[perguntaSelecionada].cast()['resposta'][0],Colors.green, responder),
            Resposta(perguntas[perguntaSelecionada].cast()['resposta'][1],Colors.red, responder),
            Resposta(perguntas[perguntaSelecionada].cast()['resposta'][2],Colors.blue, responder),
            Resposta(perguntas[perguntaSelecionada].cast()['resposta'][3],Colors.black, responder)
          ],
        );
  }
}
