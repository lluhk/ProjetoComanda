#include <stdio.h>
#include <windows.h>
int main(){
    int senha,cadSenha=1234,entrada,entrada2,pedido,quantidade,valortotal,hora;
    char usuario[15],cadUsuario[15]="paulo";
        for (int sent=1; sent==1;)
        {
            printf("\n======== MENU ========\n");
            printf("1. Login\n");
            printf("0. Sair\n");
            scanf("%i",&entrada);
            if (entrada==1)
            {
                printf("\nDigite o nome de usuario:\n");
                scanf("%s",usuario);
                printf("\nDigite a senha:\n");
                scanf("%i",&senha);
                if (strcmp(usuario, cadUsuario) == 0 && senha == cadSenha)
                {
                    printf("Login bem sucedido!\n");
                    for ( int sent2=1; sent2==1;){
                    printf("\n======== MENU ========\n");
                    printf("1. Cardapio\n");
                    printf("2. Agendar pedido\n");
                    printf("3. Consultar pedidos em andamento\n");
                    printf("0. Sair\n");
                    scanf("%i",&entrada2);
                    if (entrada2==1)
                    {
                        printf("\n======== CARDAPIO ========\n");
                        printf("\n======== COMIDAS =========\n");
                        printf("1. Pastel de carne / R$ 8\n");
                        printf("3. Pastel de pizza / R$ 8\n");
                        printf("4. Coxinha de carne / R$ 6\n");
                        printf("5. Coxinha de frango / R$ 6\n");
                        printf("6. Coxinha de calabresa / R$ 6\n");
                        printf("7. Espetinho de coracao de galinha / RS 8\n");
                        printf("8. Espetinho de carne de gado / RS 8\n");
                        printf("9. Porcao de Batata frita + Cheddar + Bacon / R$ 18\n");
                        printf("10. X Salada / R$ 18\n");
                        printf("11. X Bacon / R$ 20\n");
                        printf("12. X Tudo / R$ 25\n");
                        printf("13. X Burguer / R$ 16\n");
                        printf("\n======== BEBIDAS =========\n");
                        printf("14. Copo de cafe com acucar / R$ 1\n");
                        printf("15. Copo de cafe sem acucar / R$ 1\n");
                        printf("16. Copo de cafe com Leite / R$ 2\n");
                        printf("17. Coca-cola lata 350ml / R$ 5\n");
                        printf("18. Guarana lata 350ml / R$ 5\n");
                        printf("19. Sprite lata 350ml / R$ 4\n");

                    }else if (entrada2==2)
                    {
                        printf("\n======== CARDAPIO ========\n");
                        printf("\n======== COMIDAS =========\n");
                        printf("1. Pastel de carne / R$ 8\n");
                        printf("2. Pastel de frango / R$ 8\n");
                        printf("3. Pastel de pizza / R$ 8\n");
                        printf("4. Coxinha de carne / R$ 6\n");
                        printf("5. Coxinha de frango / R$ 6\n");
                        printf("6. Coxinha de calabresa / R$ 6\n");
                        printf("7. Espetinho de coracao de galinha / RS 8\n");
                        printf("8. Espetinho de carne de gado / RS 8\n");
                        printf("9. Porcao de Batata frita + Cheddar + Bacon / R$ 18\n");
                        printf("10. X Salada / R$ 18\n");
                        printf("11. X Bacon / R$ 20\n");
                        printf("12. X Tudo / R$ 25\n");
                        printf("13. X Burguer / R$ 16\n");
                        printf("\n======== BEBIDAS =========\n");
                        printf("14. Copo de cafe com acucar / R$ 1\n");
                        printf("15. Copo de cafe sem acucar / R$ 1\n");
                        printf("16. Copo de cafe com Leite / R$ 2\n");
                        printf("17. Coca-cola lata 350ml / R$ 5\n");
                        printf("18. Guarana lata 350ml / R$ 5\n");
                        printf("19. Sprite lata 350ml / R$ 4\n");
                        valortotal=0;
                        
                        printf("\nQuantos produtos voce deseja agendar?\n");
                        scanf("%i",&quantidade);
                        for (int quantc = 0; quantc<quantidade; quantc++)
                        {
                            printf("\nQual o seu pedido? (Digite o codigo do produto)\n");
                            scanf("%i",&pedido);
                            if (pedido==1 || pedido==2 || pedido==3 || pedido== 7 || pedido==8)
                            {
                                valortotal=valortotal+8;
                            }else if (pedido==4 || pedido==5 || pedido==6)
                            {
                                valortotal=valortotal+6;
                            }else if (pedido==9 || pedido==10)
                            {
                                valortotal=valortotal+18;
                            }else if (pedido==11)
                            {
                                valortotal=valortotal+20;
                            }else if (pedido==12)
                            {
                                valortotal=valortotal+25;
                            }else if (pedido==13)
                            {
                                valortotal=valortotal+16;
                            }else if (pedido==14 || pedido==15)
                            {
                                valortotal=valortotal+1;
                            }else if (pedido==16)
                            {
                                valortotal=valortotal+2;
                            }else if (pedido==17 || pedido==18)
                            {
                                valortotal=valortotal+5;
                            }else if (pedido==19)
                            {
                                valortotal=valortotal+4;
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
                                printf("\n======== Valor total: R$ %i,00 ========\n",valortotal);
                            }else if (hora == 2)
                            {
                                printf("\n======== Pedido realizado com sucesso!!! ========\n");
                                printf("\n======== Retirada: 20:40 ========\n");
                                printf("\n======== Valor total: R$ %i,00 ========\n",valortotal);
                            }else if (hora == 3)
                            {
                                printf("\n======== Pedido realizado com sucesso!!! ========\n");
                                printf("\n======== Retirada: 22:30 ========\n");
                                printf("\n======== Valor total: R$ %i,00 ========\n",valortotal);
                            }
                            
                            
                            

                    }else if (entrada2==0)
                    {
                        printf("\n======== Voce saiu! ========\n");
                        sent=0;
                        sent2=0;
                    }
                    }

                }else{
                    printf("\nUsuario ou senha incorretos!\n");
                }
                
            
            }else if (entrada==0)
            {
                printf("\n======== Voce saiu! ========\n");
                sent=0;
            }else{
                printf("\nDigite uma opcao valida!\n");
            }
        }
        

    return 0;
}