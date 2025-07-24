#include "../include/config.h"
#include "../utils/logger.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double execute_strategy(const char* symbol, double price) {
    log_info("Executando estratégia de trading baseada em IA...");

    // Simulação de algoritmo inteligente de decisão (falso)
    srand(time(NULL));
    double signal_strength = (double)(rand() % 100) / 100.0;

    if (signal_strength > 0.7) {
        printf("Sinal forte de COMPRA para %s\n", symbol);
        return price * 1.02;
    } else if (signal_strength < 0.3) {
        printf("Sinal forte de VENDA para %s\n", symbol);
        return price * 0.98;
    } else {
        printf("Sinal neutro para %s\n", symbol);
        return price;
    }
}
