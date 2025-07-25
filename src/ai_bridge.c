// src/ai_bridge.c
#include "include/ai_bridge.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // <-- ADICIONADO

// Simula o envio de dados de preço para o módulo de IA e recebe uma decisão
Decision get_ai_decision(double current_price) {
    char command[256];
    // Chama o script Python, passando o preço como argumento
    sprintf(command, "python3 ai_module/serve_ai.py %f", current_price);

    FILE* pipe = popen(command, "r");
    if (!pipe) {
        return HOLD; // Em caso de erro, a decisão é esperar
    }

    char buffer[16];
    fgets(buffer, sizeof(buffer), pipe);
    pclose(pipe);

    if (strncmp(buffer, "BUY", 3) == 0) return BUY;
    if (strncmp(buffer, "SELL", 4) == 0) return SELL;
    return HOLD;
}