// src/sockets.c
#include "include/sockets.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // <-- ADICIONADO

// Simula a configuração de um socket UDP para receber dados de mercado
int setup_market_socket(const char* ip, int port) {
    printf("[Socket] Configurando socket UDP para %s:%d...\n", ip, port);
    srand(time(NULL));
    printf("[Socket] Conexão 'fictícia' estabelecida. Pronto para receber dados.\n");
    return 1; // Retorna um descritor de arquivo falso
}

// Simula a leitura de um pacote de dados do mercado
int read_market_data(char* buffer, int buffer_size) {
    // Formato do dado: "BTC/USD:54321.98"
    double price = 54000.0 + (double)(rand() % 1000) - 500.0;
    snprintf(buffer, buffer_size, "BTC/USD:%.2f", price);
    return 1; // Sucesso
}