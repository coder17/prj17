COMPILE			= g++ -Wall -c -O2
LINK			= g++ -s -o prog

OBJ = \
	main.o \
	pit.o

prog: $(OBJ)
	$(LINK) $(OBJ)

pit.o: pit.cc pit.h
main.o: main.cc pit.h

