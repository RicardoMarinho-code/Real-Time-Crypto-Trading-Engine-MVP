// src/db.c
#include "include/db.h"
#include <stdio.h>

// Simula a abertura da conexão com o banco de dados
sqlite3* open_database(const char* db_file) {
    sqlite3* db;
    int rc = sqlite3_open(db_file, &db);
    if (rc) {
        fprintf(stderr, "[DB] Não foi possível abrir o banco de dados: %s\n", sqlite3_errmsg(db));
        return NULL;
    }
    printf("[DB] Banco de dados conectado com sucesso em %s.\n", db_file);
    // Aqui criariamos a tabela se ela não existisse
    return db;
}

// Simula a gravação de um trade no banco
void record_trade(sqlite3* db, const char* symbol, const char* type, double price, double amount) {
    // Em um projeto real, usariamos prepared statements para inserir os dados
    printf("[DB] Gravando trade: %s %s %.2f @ $%.2f\n", type, symbol, amount, price);
}