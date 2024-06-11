#include <stdio.h>

void agendamentoPedios(int quantidade, int valorTotal)
{
    int hora, pedido;
    for (int quantc = 0; quantc < quantidade; quantc++)
    {
        printf("\nQual o seu pedido? (Digite o codigo do produto)\n");
        scanf("%i", &pedido);
        if (pedido == 1 || pedido == 2 || pedido == 3 || pedido == 7 || pedido == 8)
        {
            valorTotal = valorTotal + 8;
        }
        else if (pedido == 4 || pedido == 5 || pedido == 6)
        {
            valorTotal = valorTotal + 6;
        }
        else if (pedido == 9 || pedido == 10)
        {
            valorTotal = valorTotal + 18;
        }
        else if (pedido == 11)
        {
            valorTotal = valorTotal + 20;
        }
        else if (pedido == 12)
        {
            valorTotal = valorTotal + 25;
        }
        else if (pedido == 13)
        {
            valorTotal = valorTotal + 16;
        }
        else if (pedido == 14 || pedido == 15)
        {
            valorTotal = valorTotal + 1;
        }
        else if (pedido == 16)
        {
            valorTotal = valorTotal + 2;
        }
        else if (pedido == 17 || pedido == 18)
        {
            valorTotal = valorTotal + 5;
        }
        else if (pedido == 19)
        {
            valorTotal = valorTotal + 4;
        }
    }
    printf("\nQual seria o horario de retirada\n");
    printf("1. 18:00\n");
    printf("2. 20:40\n");
    printf("3. 22:30\n");
    scanf("%i", &hora);
    if (hora == 1)
    {
        printf("\n======== Pedido realizado com sucesso!!! ========\n");
        printf("\n======== Retirada: 18:00 ========\n");
        printf("\n======== Valor total: R$ %i,00 ========\n", valorTotal);
    }
    else if (hora == 2)
    {
        printf("\n======== Pedido realizado com sucesso!!! ========\n");
        printf("\n======== Retirada: 20:40 ========\n");
        printf("\n======== Valor total: R$ %i,00 ========\n", valorTotal);
    }
    else if (hora == 3)
    {
        printf("\n======== Pedido realizado com sucesso!!! ========\n");
        printf("\n======== Retirada: 22:30 ========\n");
        printf("\n======== Valor total: R$ %i,00 ========\n", valorTotal);
    }
}
