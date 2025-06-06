SHELL := /bin/bash

CC = gcc
OUT = main
SRC := $(shell find . -name "*.c")

main: $(SRC)
	$(CC) $(SRC) -o $(OUT)
	./$(OUT)
