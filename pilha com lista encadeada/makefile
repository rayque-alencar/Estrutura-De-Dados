
Pilha: main.o pilha.o noPilha.o
	g++ main.o pilha.o noPilha.o -o Pilha

main.o: main.cpp
	g++ -c main.cpp

pilha.o: Pilha.cpp Pilha.hpp 
	g++ -c pilha.cpp

noPilha.o: NoPilha.cpp NoPilha.hpp
	g++ -c NoPilha.cpp

clean:
	rm *.o Pilha

#no windows se usa o comando mingw32-make, e não so make