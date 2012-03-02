COMPILE			= g++ -Wall -c -O2
LINK			= g++ -s -o prog

OBJ = \
	main.o \
	alg8.o \
	plot.o

prog: $(OBJ)
	$(LINK) $(OBJ)

alg8.o: alg8.cc alg8.h
plot.o: plot.cc plot.h
main.o: main.cc plot.h
