
ListaSequencial: main.o Lista.o 
	g++ main.o Lista.o -o ListaSequencial

main.o: main.cpp
	g++ -c main.cpp

Lista.o: Lista.cpp Lista.hpp 
	g++ -c Lista.cpp

clean:
	rm *.o ListaSequencial

#no windows se usa o comando mingw32-make, e não so make