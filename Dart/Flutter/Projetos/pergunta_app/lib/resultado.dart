import 'dart:ffi';

import 'package:flutter/material.dart';
import './resposta.dart';

class Resultado extends StatelessWidget {
  final int pontuacao;
  final void Function() reinicarQuestionario;

  const Resultado(this.pontuacao, this.reinicarQuestionario, {super.key});

  String get fraseResultado {
    if (pontuacao < 8) {
      return 'Pontuação: $pontuacao\nParabéns!\n';
    } else if (pontuacao < 12) {
      return 'Pontuação: $pontuacao\nvocê é bom!\n';
    } else if (pontuacao < 20) {
      return 'Pontuação: $pontuacao\nImpressionante!\n';
    } else {
      return 'Pontuação: $pontuacao\nNível Jedi!\n';
    }
  }

  @override
  Widget build(BuildContext context) {
    return Column(
      mainAxisAlignment: MainAxisAlignment.center,
      children: [
        Center(
          child: Text(
            fraseResultado,
            style: const TextStyle(fontSize: 30, fontFamily: 'roboto'),
          ),
        ),

        ElevatedButton.icon(
          onPressed: reinicarQuestionario,
          icon: const Icon(
            Icons.restart_alt,
            color: Colors.white,
            size: 20.0,
            semanticLabel: 'Text to announce in accessibility modes',
          ),
          label: const Text('Reiniciar?'),
        ),

        
        Container(
          alignment: Alignment.bottomCenter,
          child: const Center(
            child: Text(
              'By Kaio',
              style: TextStyle(fontSize: 12, fontFamily: 'roboto'),
            ),
          ),
        )
      ],
    );
  }
}
