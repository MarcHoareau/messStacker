SRC = src
BUILD = build
TEST = test

default : lib

clean :
	rm -r *.o

lib : $(SRC)/messStacker.c
	gcc -c -Wall $(SRC)/messStacker.c -o $(SRC)/messStacker.o

ver : $(TEST)/ver.c lib
	gcc -Wall $(TEST)/ver.c $(SRC)/messStacker.o -o $(TEST)/ver && ./$(TEST)/ver
