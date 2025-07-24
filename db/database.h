#ifndef DATABASE_H
#define DATABASE_H

void init_database();
void connect_to_database();
void cache_market_data(const char* symbol, double price);
void fetch_historical_data(const char* symbol);

#endif
