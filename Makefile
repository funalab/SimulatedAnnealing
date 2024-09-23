PROG = SimulatedAnnealing
OBJS = main.o
CC = gcc
CFLAGS = -g -Wall -I./include
LDFLAGS = -L./lib -Wl,--rpath -Wl,./lib -lsbml -lm -lz -lxml2

.PHONY: all
all: $(PROG)

.SUFFIXES: .o .c
.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

$(PROG): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

run: $(PROG)
	./$(PROG)

.PHONY: clean
clean:
	rm -f $(PROG) $(OBJS)
