CC := g++ # This is the main compiler

all: app

app: main.o Empregado.o Engenheiro.o Vendedor.o
	$(CC) -oapp main.o Empregado.o Engenheiro.o Vendedor.o

main.o: main.cpp
	$(CC) -c main.cpp

Empregado.o: Empregado.cpp
	$(CC) -c Empregado.cpp

Engenheiro.o: Engenheiro.cpp
	$(CC) -c Engenheiro.cpp

Vendedor.o: Vendedor.cpp
	$(CC) -c Vendedor.cpp

clean:
	rm *.o app