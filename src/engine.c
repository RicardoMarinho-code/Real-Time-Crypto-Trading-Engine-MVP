// src/engine.c
#include "include/engine.h"
#include "include/sockets.h"  // <-- ADICIONADO
#include "include/ai_bridge.h"  // <-- ADICIONADO
#include <pthread.h>
#include <stdio.h>             // <-- ADICIONADO
#include <unistd.h>            // <-- ADICIONADO para sleep()

void* market_data_thread(void* arg) {
    // Loop que lê dados do "socket"
    while(1) {
        char market_data[64];
        read_market_data(market_data, sizeof(market_data));
        printf("[Market] Dados recebidos: %s\n", market_data);
        sleep(1); // Simula o fluxo de dados
    }
    return NULL;
}

void* trading_logic_thread(void* arg) {
    // Loop que consulta a IA e "executa" ordens
    while(1) {
        double current_price = 54321.0; // Pegaria o preço do book
        Decision decision = get_ai_decision(current_price);
        
        // Adicionamos um print para usar a variável 'decision' e ver o resultado
        if (decision == BUY) {
            printf("[Logic] Decisão da IA: COMPRAR\n");
        } else if (decision == SELL) {
            printf("[Logic] Decisão da IA: VENDER\n");
        }
        
        sleep(5);
    }
    return NULL;
}

void init_engine() {
    pthread_t market_thread_id, logic_thread_id;
    printf("[Engine] Iniciando threads de mercado e de lógica de negociação...\n");
    pthread_create(&market_thread_id, NULL, market_data_thread, NULL);
    pthread_create(&logic_thread_id, NULL, trading_logic_thread, NULL);
    
    // Mantém a thread principal viva para as outras poderem rodar
    pthread_join(market_thread_id, NULL);
    pthread_join(logic_thread_id, NULL);
}