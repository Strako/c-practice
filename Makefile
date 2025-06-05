CC = gcc
SRC := $(wildcard **/*.c) $(wildcard *.c)
OUT = main

main: $(SRC)
	$(CC) $(SRC) -o $(OUT)
	./$(OUT)