#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estrutura.h"

// Função para retirar produtos do estoque
void retirarProduto(int estoque[][MAX_ATRIBUTOS], int *numProdutos) {
    int id, quantidade;
    printf("Digite o ID do produto que deseja retirar: ");
    scanf("%d", &id);

    for (int i = 0; i < *numProdutos; i++) {
        if (estoque[i][0] == id) {
            printf("Digite a quantidade que deseja retirar: ");
            scanf("%d", &quantidade);

            if (quantidade > estoque[i][2]) {
                printf("Erro: Quantidade insuficiente em estoque!\n");
                return;
            }

            estoque[i][2] -= quantidade;
            printf("%d unidades de %s retiradas do estoque com sucesso!\n", quantidade, estoque[i] + 1);
            return;
        }
    }

    printf("Erro: Produto não encontrado!\n");
}
