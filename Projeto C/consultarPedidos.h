// consultarPedidos.c
#include <stdio.h>
#include "estrutura.h"

void consultarPedidos() {
    if (numPedidos == 0) {
        printf("\nNenhum pedido em andamento.\n");
    } else {
        printf("\n======== PEDIDOS EM ANDAMENTO ========\n");
        for (int i = 0; i < numPedidos; i++) {
            printf("\nPedido %d:\n", i + 1);
            for (int j = 0; j < pedidos[i].numItems; j++) {
                printf("Codigo do Produto: %d\n", pedidos[i].items[j].produtoCodigo);
                printf("Quantidade: %d\n", pedidos[i].items[j].quantidade);
            }
            printf("Valor Total: R$ %d,00\n", pedidos[i].valorTotal);
            printf("Horario de Retirada: %02d:%02d\n", pedidos[i].horarioRetirada / 100, pedidos[i].horarioRetirada % 100);
            printf("\n====================================\n");
        }
    }
}
