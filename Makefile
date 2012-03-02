COMPILE			= g++ -Wall -c -O2
LINK			= g++ -s -o prog

OBJ = \
	main.o \
	alg8.o \
	gr.o

prog: $(OBJ)
	$(LINK) $(OBJ)

alg8.o: alg8.cc alg8.h
gr.o: gr.cc gr.h
main.o: main.cc gr.h

