#include "../include/config.h"
#include <stdio.h>

void init_logger() {
    printf("[Logger] Sistema de logs iniciado.\n");
}

void log_info(const char* msg) {
    printf("[INFO]: %s\n", msg);
}

void log_error(const char* msg) {
    printf("[ERRO]: %s\n", msg);
}
