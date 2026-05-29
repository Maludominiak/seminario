#pragma once
#include <string>
using namespace std;

enum TIPO {Espada, Machado, Pocao, Escudo};
// definir tipos possíveis de itens.
// enum =  enumeração, tipo = um valor fixo.
// "intrínseco", porque não muda entre instâncias iguais.
// Por isso escolhemos o flywieght ja que garante a existência única de cada item compartilhado (sem duplicatas)

class Item {
private:
    string nome;
    TIPO tipo_item;  

public:
    Item(string n, TIPO ti);
    // duração = "extrínseca":
    // varia conforme o uso do item por cada personagem,
    // então não deve ficar dentro da classe compartilhada.

    ~Item();
    // imprimir uma mensagem de depuração.

    string obterNome();
    TIPO obterTipo();
    // Getter: devolve o nome e tipo do item.
    // Como "nome" e "tipo"  é privado, precisamos desse método para acessá-lo.

    void mostrarInfo();
    // Mostrar informações (imprime no console o nome e o tipo do item)
};
