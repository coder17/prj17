COMPILE			= g++ -Wall -c -O2
LINK			= g++ -s -o prog

OBJ = \
	main.o \
	alg8.o \
	lst.o \
	gr.o \
	pit.o

prog: $(OBJ)
	$(LINK) $(OBJ)

alg8.o: alg8.cc alg8.h
lst.o: lst.cc lst.h
gr.o: gr.cc gr.h
pit.o: pit.cc pit.h
main.o: main.cc alg8.h lst.h gr.h pit.h

