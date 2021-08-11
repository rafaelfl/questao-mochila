#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mochila.h"

Mochila * criar_mochila() {
  Mochila *m = malloc(sizeof(Mochila));

  m->qt_itens = 0;

  return m;
}

void liberar_mochila(Mochila *mochila) {
  free(mochila);
}

void inserir_item(Mochila *m, char item[50]) {
  if (m->qt_itens < 10) {
    int pos = m->qt_itens;

    strcpy(m->itens[pos], item);

    m->qt_itens++;
  }
}

int quantidade_itens(Mochila *mochila) {
  return mochila->qt_itens;
}

void remover_item(Mochila *m, char *str) {
  if (m->qt_itens > 0) {
    int pos = m->qt_itens - 1;

    strcpy(str, m->itens[pos]);
    m->qt_itens--;
  } else {
    strcpy(str,"");
  }
}