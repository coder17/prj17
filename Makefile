COMPILE			= g++ -Wall -c -O2
LINK			= g++ -s -o prog

OBJ = \
	main.o \
	plot.o \
	plot_pp.o

prog: $(OBJ)
	$(LINK) $(OBJ)

main.o: main.cc plot.h plot_pp.h
plot.o: plot.cc plot.h
plot_pp.o: plot_pp.cc plot_pp.h plot.h

