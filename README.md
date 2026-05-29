# 🧩 Classe Item em C++

Este projeto implementa uma classe **Item** em C++ para representar objetos em um inventário de jogo.  
A estrutura demonstra conceitos de **POO**, como construtores, destrutores e enumerações.

## 📂 Estrutura

- **Item.h** → Declaração da classe e enumeração `TIPO`.  
- **Item.cpp** → Implementação dos métodos da classe.  

## 🔑 Principais Recursos

- **Construtor**: inicializa nome e tipo do item.  
- **Destrutor**: imprime mensagem ao destruir o objeto.  
- **Getters**: acesso seguro a atributos privados.  
- **mostrarInfo**: exibe informações do item no console.  

## 🗂️ Enumeração de Tipos

```cpp
enum TIPO {Espada, Machado, Escudo};
```

- Espada → 0  
- Machado → 1  
- Escudo → 2

## 🚀 Exemplo de Uso

```cpp
#include "Item.h"
#include <iostream>
using namespace std;

int main() {
    Item espada("Espada de Ferro", Espada);
    espada.mostrarInfo();

    return 0;
}
```

### Saída:
```
Item: Espada de Ferro | Tipo: 0
Item destruído: Espada de Ferro
```

## 🎯 Objetivo

Este projeto serve como base para:
- Inventários em jogos.  
- Demonstração de ciclo de vida de objetos em C++.  
- Aplicação prática de encapsulamento e enumerações.  
