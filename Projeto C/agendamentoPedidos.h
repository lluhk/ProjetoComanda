#include <stdio.h>
#include "estrutura.h"

Pedido pedidos[MAX_PEDIDOS];
int numPedidos = 0;

void agendamentoPedios(int quantidade, int valorTotal) {
    int hora, pedido;
    Pedido novoPedido;
    novoPedido.numItems = 0;
    novoPedido.valorTotal = 0;

    for (int quantc = 0; quantc < quantidade; quantc++) {
        printf("\nQual o seu pedido? (Digite o codigo do produto)\n");
        scanf("%i", &pedido);

        int valorItem = 0;
        if (pedido == 1 || pedido == 2 || pedido == 3 || pedido == 7 || pedido == 8) {
            valorItem = 8;
        } else if (pedido == 4 || pedido == 5 || pedido == 6) {
            valorItem = 6;
        } else if (pedido == 9 || pedido == 10) {
            valorItem = 18;
        } else if (pedido == 11) {
            valorItem = 20;
        } else if (pedido == 12) {
            valorItem = 25;
        } else if (pedido == 13) {
            valorItem = 16;
        } else if (pedido == 14 || pedido == 15) {
            valorItem = 1;
        } else if (pedido == 16) {
            valorItem = 2;
        } else if (pedido == 17 || pedido == 18) {
            valorItem = 5;
        } else if (pedido == 19) {
            valorItem = 4;
        }

        novoPedido.items[novoPedido.numItems].produtoCodigo = pedido;
        novoPedido.items[novoPedido.numItems].quantidade = 1; // Assuming quantity of 1 per item for simplicity
        novoPedido.valorTotal += valorItem;
        novoPedido.numItems++;
    }

    printf("\nQual seria o horario de retirada\n");
    printf("1. 18:00\n");
    printf("2. 20:40\n");
    printf("3. 22:30\n");
    scanf("%i", &hora);

    if (hora >= 1 && hora <= 3) {
        switch (hora) {
            case 1: novoPedido.horarioRetirada = 1800; break;
            case 2: novoPedido.horarioRetirada = 2040; break;
            case 3: novoPedido.horarioRetirada = 2230; break;
        }
        pedidos[numPedidos] = novoPedido;
        numPedidos++;
        
        printf("\n======== Pedido realizado com sucesso!!! ========\n");
        printf("\n======== Retirada: %02d:%02d ========\n", novoPedido.horarioRetirada / 100, novoPedido.horarioRetirada % 100);
        printf("\n======== Valor total: R$ %d,00 ========\n", novoPedido.valorTotal);
    } else {
        printf("\nOpcao de horario invalida!\n");
    }
}
