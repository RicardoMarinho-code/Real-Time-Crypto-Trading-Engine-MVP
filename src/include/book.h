#ifndef BOOK_H
#define BOOK_H

// Enum para o tipo de ordem
typedef enum {
    BID, // Compra
    ASK  // Venda
} OrderType;

// Estrutura fictícia para o livro de ordens
typedef struct {
    int order_count;
    // Em um projeto real, aqui haveria uma árvore ou heap
} OrderBook;

// Declaração da função que adiciona uma ordem
void add_order_to_book(OrderBook* book, OrderType type, double price, double amount);

#endif // BOOK_H