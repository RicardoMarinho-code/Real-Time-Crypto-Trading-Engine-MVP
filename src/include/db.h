#ifndef DB_H
#define DB_H

#include <sqlite3.h>

// Declaração da função que abre a conexão com o banco de dados
sqlite3* open_database(const char* db_file);

// Declaração da função que grava um trade
void record_trade(sqlite3* db, const char* symbol, const char* type, double price, double amount);

#endif // DB_H