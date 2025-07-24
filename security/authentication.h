#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

int authenticate_user(const char* username, const char* password);
void generate_token(const char* username);

#endif
