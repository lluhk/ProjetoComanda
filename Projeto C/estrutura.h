
#define MAX_NOME 50


// estrutura.h
#ifndef ESTRUTURA_H
#define ESTRUTURA_H

#define MAX_PRODUTOS 100
#define MAX_ATRIBUTOS 5
#define MAX_PEDIDOS 50
#define MAX_ITEMS 10 // Maximum items per order

typedef struct {
    int produtoCodigo;
    int quantidade;
} Item;

typedef struct {
    Item items[MAX_ITEMS];
    int numItems;
    int valorTotal;
    int horarioRetirada;
} Pedido;

extern Pedido pedidos[MAX_PEDIDOS];
extern int numPedidos;

#endif
