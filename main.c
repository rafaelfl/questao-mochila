#include <stdio.h>
#include "mochila.h"

int main() {
  Mochila *m1;
  char temp[50];

  m1 = criar_mochila();

  printf("Quantidade: %d\n", quantidade_itens(m1));

  inserir_item(m1, "espada");
  inserir_item(m1, "flauta");
  inserir_item(m1, "adaga");

  printf("Quantidade: %d\n", quantidade_itens(m1));

  remover_item(m1, temp);
  printf("%s\n", temp);

  remover_item(m1, temp);
  printf("%s\n", temp);

  remover_item(m1, temp);
  printf("%s\n", temp);

  printf("Quantidade: %d\n", quantidade_itens(m1));

  liberar_mochila(m1);

  return 0;
}