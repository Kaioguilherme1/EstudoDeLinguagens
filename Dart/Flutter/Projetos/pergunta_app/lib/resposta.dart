import 'package:flutter/material.dart';

class Resposta extends StatelessWidget {
  final String resposta;
  final Color cor;
  final void Function() onSelect;

  /// Criar o botão de resposta
  const Resposta(this.resposta, this.cor, this.onSelect, {super.key});

  @override
  Widget build(BuildContext context) {
    return Container(
        width: 300,
        margin: const EdgeInsets.symmetric(vertical: 10),
        child: ElevatedButton(
          onPressed: onSelect,
          style: ElevatedButton.styleFrom(
            backgroundColor: cor,
            padding: const EdgeInsets.symmetric(horizontal: 100, vertical: 20),
          ),
          child: Text(resposta),
        ));
  }
}
