#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

// Estrutura para representar um produto
typedef struct {
    int id;
    char nome[50];
    int quantidade;
} Produto;

// Funcao para adicionar produtos ao estoque
void adicionarProduto(Produto estoque[], int *numProdutos) {
    if (*numProdutos >= MAX_PRODUTOS) {
        printf("Erro: O estoque está cheio!\n");
        return;
    }

    Produto novoProduto;
    printf("Digite o nome do produto: ");
    scanf("%s", novoProduto.nome);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &novoProduto.quantidade);

    novoProduto.id = *numProdutos + 1; // ID unico para cada produto

    estoque[*numProdutos] = novoProduto;
    (*numProdutos)++;

    printf("Produto adicionado ao estoque com sucesso!\n");
}

// Funcao para retirar produtos do estoque
void retirarProduto(Produto estoque[], int *numProdutos) {
    int id, quantidade;
    printf("Digite o ID do produto que deseja retirar: ");
    scanf("%d", &id);

    for (int i = 0; i < *numProdutos; i++) {
        if (estoque[i].id == id) {
            printf("Digite a quantidade que deseja retirar: ");
            scanf("%d", &quantidade);

            if (quantidade > estoque[i].quantidade) {
                printf("Erro: Quantidade insuficiente em estoque!\n");
                return;
            }

            estoque[i].quantidade -= quantidade;
            printf("%d unidades de %s retiradas do estoque com sucesso!\n", quantidade, estoque[i].nome);
            return;
        }
    }

    printf("Erro: Produto nao encontrado!\n");
}

// Funcao para cadastrar um pedido e debitar do estoque
void cadastrarPedido(Produto estoque[], int numProdutos) {
    int id, quantidade;
    printf("Digite o ID do produto que deseja pedir: ");
    scanf("%d", &id);

    for (int i = 0; i < numProdutos; i++) {
        if (estoque[i].id == id) {
            printf("Digite a quantidade que deseja pedir: ");
            scanf("%d", &quantidade);

            if (quantidade > estoque[i].quantidade) {
                printf("Erro: Quantidade insuficiente em estoque!\n");
                return;
            }

            estoque[i].quantidade -= quantidade;
            printf("Pedido de %d unidades de %s cadastrado com sucesso!\n", quantidade, estoque[i].nome);
            return;
        }
    }

    printf("Erro: Produto nao encontrado!\n");
}

int main() {
    Produto estoque[MAX_PRODUTOS];
    int numProdutos = 0;
    int opcao;
    int controleDeProduto[15][15];
    
    printf("_______________________________\n");
    printf("|          Junho 2024         |\n");
    printf("|_____________________________|\n");
    printf("|  D   S   T   Q   Q   S   S  |\n");
    printf("|_____________________________|\n");
    printf("|              1   2   3   4  |\n");
    printf("|  5   6   7   8   9  10  11  |\n");
    printf("| 12  13  14  15  16  17  18  |\n");
    printf("| 19  20  21  22  23  24  25  |\n");
    printf("| 26  27  28  29  30          |\n");
    printf("|_____________________________|\n");

    do {
        printf("\n===== Menu =====\n");
        printf("1. Adicionar Produto\n");
        printf("2. Retirar Produto\n");
        printf("3. Cadastrar Pedido\n");
        printf("4. Sair\n");
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
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}


//funcao para listar quantidade de produtos 