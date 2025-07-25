// main.c
#include "src/include/engine.h"
#include <stdio.h>

int main() {
    printf("==========================================\n");
    printf("  Iniciando Real-Time Crypto Trading Engine \n");
    printf("==========================================\n");

    // A função principal agora só precisa iniciar o motor.
    // O motor (engine.c) cuidará de criar as threads
    // e gerenciar todo o resto.
    init_engine();

    printf("Engine finalizado.\n");

    return 0;
}