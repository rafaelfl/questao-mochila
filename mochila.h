#include <stdio.h>

/*
Modele e implemente um TAD coleção "mochila". Cada item da mochila é basicamente
uma string que armazena o nome do item. A mochila deve ser capaz de armazenar até 10
itens. Se você achar mais fácil, pode implementar um tipo estruturado “item” para armazenar na mochila, mas é opcional.
*/

typedef struct _mochila {
  int qt_itens;
  char itens[10][50];
} Mochila;

/*
Implemente as operações da mochila. Ela deverá fornecer operações para criar, liberar (o
jogo precisará que as mochilas sejam alocadas dinamicamente!), inserir um item, consultar quantos itens a mochila tem e retirar/retornar um item da mochila. No entanto, tem um
detalhe importante na mochila: sempre será retirado/retornado o item que foi inserido por
último nela! Por exemplo, se forem inseridos, nessa ordem, os elementos “espada”,
“flauta" e “adaga”, a operação de retirar os itens deve retornar os valores “adaga”,
“flauta" e “espada”.
*/

Mochila * criar_mochila();

void liberar_mochila(Mochila *mochila);

void inserir_item(Mochila *mochila, char item[50]);

int quantidade_itens(Mochila *mochila);

void remover_item(Mochila *mochila, char *str);