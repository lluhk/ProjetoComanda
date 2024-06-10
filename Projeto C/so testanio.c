#include <stdio.h>
#include <string.h>

int main() {
    int senha, cadSenha = 1234, entrada, pedido, quantidade, valortotal, hora;
    char usuario[15], cadUsuario[15] = "paulo";

    for (int sent = 1; sent == 1;) {
        printf("\n======== MENU ========\n");
        printf("1. Login\n");
        printf("0. Sair\n");
        scanf("%i", &entrada);

        if (entrada == 1) {
            printf("\nDigite o nome de usuario:\n");
            scanf("%s", usuario);  // Aqui não é necessário o '&' antes de 'usuario'
            printf("\nDigite a senha:\n");
            scanf("%i", &senha);

            if (strcmp(usuario, cadUsuario) == 0 && senha == cadSenha) {
                printf("\nLogin bem-sucedido!\n");
                // Coloque aqui o código que deve ser executado após o login bem-sucedido
            } else {
                printf("\nUsuario ou senha invalido\n");
            }
        } else if (entrada == 0) {
            printf("\nSaindo...\n");
            break;
        } else {
            printf("\nOpção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
