#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include "estrutura.h"
#include "adicionarProduto.h"
#include "retirarProduto.h"
#include "cadastrarPedido.h"
#include "listarProdutos.h"
#include "cardapio.h"
#include "agendamentoPedidos.h"
#include "consultarPedidos.h"

int main() {
    int senha, cadSenha = 1234, entrada, entrada1, entrada2, quantidade, valorTotal, opcao, numProdutos = 0, estoque[MAX_PRODUTOS][MAX_ATRIBUTOS];
    char usuario[15], cadUsuario[15] = "paulo";

    for (int sent = 1; sent == 1;) {
        printf("\n======== MENU LOGIN ========\n");
        printf("1. Login\n");
        printf("0. Sair\n");
        scanf("%i", &entrada);

        if (entrada == 1) {
            printf("\nDigite o nome de usuario:\n");
            scanf("%s", usuario);
            printf("\nDigite a senha:\n");
            scanf("%i", &senha);

            if (strcmp(usuario, cadUsuario) == 0 && senha == cadSenha) {
                printf("Login bem sucedido!\n");

                for (int sent2 = 1; sent2 == 1;) {
                    printf("\n========MENU PRINCIPAL========\n");
                    printf("1. Agendamento de pedidos\n");
                    printf("2. Gerenciamento de estoque\n");
                    printf("0. Sair\n");
                    scanf("%i", &entrada1);

                    if (entrada1 == 1) {
                        for (int sent3 = 1; sent3 == 1;) {
                            printf("\n======== MENU ========\n");
                            printf("1. Cardapio\n");
                            printf("2. Agendar pedido\n");
                            printf("3. Consultar pedidos em andamento\n");
                            printf("0. Sair\n");
                            scanf("%i", &entrada2);

                            if (entrada2 == 1) {
                                cardapio();
                            } else if (entrada2 == 2) {
                                cardapio();
                                valorTotal = 0;

                                printf("\nQuantos produtos voce deseja agendar?\n");
                                scanf("%i", &quantidade);
                                agendamentoPedios(quantidade, valorTotal);
                            } else if (entrada2 == 3) {
                                consultarPedidos();
                            } else if (entrada2 == 0) {
                                sent3 = 0;
                                break;
                            } else {
                                printf("\nOpcao invalida!\n");
                            }
                        }
                    } else if (entrada1 == 2) {
                        do {
                            printf("\n===== Menu =====\n");
                            printf("1. Adicionar Produto\n");
                            printf("2. Retirar Produto\n");
                            printf("3. Cadastrar Pedido\n");
                            printf("4. Listar Produtos\n");
                            printf("0. Sair\n");
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
                                case 0:
                                    break;
                                default:
                                    printf("\nOpcao invalida!\n");
                            }
                        } while (opcao != 0);
                    } else if (entrada1 == 0) {
                        printf("\n======== Voce saiu! ========\n");
                        sent = 0;
                        sent2 = 0;
                        break;
                    } else {
                        printf("\nOpcao invalida!\n");
                    }
                }
            } else {
                printf("\nUsuario ou senha incorretos!\n");
            }
        } else if (entrada == 0) {
            printf("\n======== Voce saiu! ========\n");
            sent = 0;
        } else {
            printf("\nDigite uma opcao valida!\n");
        }
    }

    return 0;
}
