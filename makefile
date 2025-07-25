# Makefile
CC=gcc
CFLAGS=-Isrc/include -pthread -Wall -g
LDFLAGS=-lsqlite3

SRC_DIR=src
OBJ_DIR=obj
BIN_DIR=bin

SOURCES=$(wildcard $(SRC_DIR)/*.c)
OBJECTS=$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SOURCES))
EXECUTABLE=$(BIN_DIR)/crypto_engine

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) main.c
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(EXECUTABLE)

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all run clean