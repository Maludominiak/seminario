#include "Item.h"
#include <iostream>
using namespace std;


// -------------------- Construtor --------------------
Item::Item(string n, TIPO ti) : nome(n), tipo_item(ti) {}
// Este é o construtor da classe Item.
// Ele recebe dois parâmetros: "n" (nome do item) e "ti" (tipo do item).
// : nome(n), tipo_item(ti) = lista de inicialização.
// Exemplo: Item("Espada de Ferro", Espada) cria um item com n "Espada de Ferro" e Ti "Espada"


// -------------------- Destrutor --------------------
Item::~Item() {
    cout << "Item destruído: " << nome << endl;
}

// objeto deixa de existir,
// não precisa liberar memória manualmente (sem ponteiros internos) --> INFO EXTRA, SEM NECESSIDADE
// acompanhar ciclo dos objetos e evitar vazamento de memórias --> INFO EXTRA, SEM NECESSIDADE
// Exemplo: "Item destruído: Espada de Ferro".

// -------------------- Getter (nome e tipo)  --------------------
string Item::obterNome() { 
    return nome; 
}

// "nome" = privado, não pode ser acessado diretamente fora da classe.
// Exemplo: "Espada de Ferro".

TIPO Item::obterTipo() { 
    return tipo_item; 
}
// Exemplo: Espada (valor 0 da enumeração).

//-------------------------------------------------------------//
void Item::mostrarInfo() {
    cout << "Item: " << nome << " | Tipo: " << tipo_item << endl;
}
// Exemplo de saída: "Item: Espada de Ferro | Tipo: 0"  (0 = enum Espada).


