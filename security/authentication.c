#include "../include/config.h"
#include "../utils/logger.h"
#include <stdio.h>
#include <string.h>

int authenticate_user(const char* username, const char* password) {
    log_info("Iniciando autenticação...");

    // Simulação de autenticação com verificação criptografada (falsa)
    if (strcmp(username, "admin") == 0 && strcmp(password, "123456") == 0) {
        log_info("Usuário autenticado com sucesso.");
        return 1;
    }

    log_error("Falha na autenticação.");
    return 0;
}

void generate_token(const char* username) {
    // Simula geração de token JWT
    printf("Token gerado para %s: [FAKE-JWT-TOKEN-1234]\n", username);
}
