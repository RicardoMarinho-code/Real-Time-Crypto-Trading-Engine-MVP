#ifndef SOCKETS_H
#define SOCKETS_H

// Declaração da função que "configura" a conexão de mercado
int setup_market_socket(const char* ip, int port);

// Declaração da função que "lê" dados de mercado
int read_market_data(char* buffer, int buffer_size);

#endif // SOCKETS_H