#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estrutura.h"


// Função para listar quantidade de produtos
void listarProdutos(int estoque[][MAX_ATRIBUTOS], int numProdutos) {
    system("cls");
    printf("Lista de Produtos no Estoque:\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("\nID: %d, \nNome: %s, \nQuantidade: %d\n", estoque[i][0], estoque[i] + 1, estoque[i][2]);
    }
}

