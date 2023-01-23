import 'package:flutter/material.dart';

class TransactionForm extends StatelessWidget {
  final void Function(String, double) onSubmit;

  /// Realiza o Formulario
  TransactionForm({super.key, required this.onSubmit});

  _submitForm() {
    // ignore: avoid_print
    print('click');
    final title = titleControler.text;
    final value = double.tryParse(valueControler.text) ?? 0.0;
    if (title.isEmpty || value <= 0) {
      return;
    }

    onSubmit(title, value);
  }

  final titleControler = TextEditingController();
  final valueControler = TextEditingController();

  @override
  Widget build(BuildContext context) {
    return Card(
      // formulario
      elevation: 5,
      child: Padding(
        padding: const EdgeInsets.all(10),
        child: Column(
          children: <Widget>[
            TextField(
              controller: titleControler,
              onSubmitted: (_) => _submitForm(),
              decoration: const InputDecoration(labelText: 'Títuto'),
            ),
            TextField(
              controller: valueControler,
              keyboardType:
                  const TextInputType.numberWithOptions(decimal: true),
              onSubmitted: (_) => _submitForm(),
              decoration: const InputDecoration(labelText: 'Valor R\$'),
            ),
            ElevatedButton(
              style: ElevatedButton.styleFrom(backgroundColor: Colors.purple),
              onPressed: _submitForm,
              child: const Text('Nova Transação'),
            )
          ],
        ),
      ),
    );
  }
}
