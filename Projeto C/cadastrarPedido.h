#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estrutura.h"

// Função para cadastrar um pedido e debitar do estoque
void cadastrarPedido(int estoque[][MAX_ATRIBUTOS], int numProdutos) {
    int id, quantidade;
    printf("\nDigite o ID do produto que deseja pedir: ");
    scanf("%d", &id);

    for (int i = 0; i < numProdutos; i++) {
        if (estoque[i][0] == id) {
            printf("\nDigite a quantidade que deseja pedir: ");
            scanf("%d", &quantidade);

            if (quantidade > estoque[i][2]) {
                printf("\nErro: Quantidade insuficiente em estoque!\n");
                return;
            }

            estoque[i][2] -= quantidade;
            printf("\nPedido de %d unidades de %s cadastrado e retirado do estoque com sucesso!\n", quantidade, estoque[i] + 1);
            return;
        }
    }

    printf("\nErro: Produto não encontrado!\n");
}
