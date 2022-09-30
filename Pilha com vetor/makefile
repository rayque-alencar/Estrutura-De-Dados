
PilhaComVetor: main.o pilha.o 
	g++ main.o pilha.o -o PilhaComVetor

main.o: main.cpp
	g++ -c main.cpp

pilha.o: Pilha.cpp Pilha.hpp 
	g++ -c pilha.cpp

clean:
	rm *.o PilhaComVetor

#no windows se usa o comando mingw32-make, e não so make