// src/book.c
#include "include/book.h"
#include <stdio.h>

// Simula a adição de uma ordem ao livro (book)
void add_order_to_book(OrderBook* book, OrderType type, double price, double amount) {
    const char* order_type_str = (type == BID) ? "COMPRA (BID)" : "VENDA (ASK)";
    printf("[Book] Adicionando ordem de %s: %.2f @ $%.2f\n", order_type_str, amount, price);
    // Aqui iria a lógica complexa de inserção na árvore/heap
    printf("[Book] Livro de ordens atualizado.\n");
}