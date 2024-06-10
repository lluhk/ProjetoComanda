#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"estrutura.h"
#include "adicionarProduto.h"
#include"retirarProduto.h"
#include"cadastrarPedido.h"
#include"listarProdutos.h"


int main() {
    int estoque[MAX_PRODUTOS][MAX_ATRIBUTOS];
    int numProdutos = 0;
    int opcao;

    do {
        printf("\n===== Menu =====\n");
        printf("1. Adicionar Produto\n");
        printf("2. Retirar Produto\n");
        printf("3. Cadastrar Pedido\n");
        printf("4. Listar Produtos\n");
        printf("5. Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(estoque, &numProdutos);
                break;
            case 2:
                retirarProduto(estoque, &numProdutos);
                break;
            case 3:
                cadastrarPedido(estoque, numProdutos);
                break;
            case 4:
                listarProdutos(estoque, numProdutos);
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
