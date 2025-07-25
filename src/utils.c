// src/utils.c
#include "include/utils.h"
#include <stdio.h>
#include <time.h>
#include <string.h> // <-- ADICIONE ESTA LINHA

// Simula uma função de log com timestamp
void log_message(const char* message) {
    time_t now = time(NULL);
    char* dt = ctime(&now);
    dt[strlen(dt) - 1] = '\0'; // Remove a nova linha
    printf("[%s] %s\n", dt, message);
}