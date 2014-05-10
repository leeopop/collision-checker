CFLAGS=-g

all: testprog
clean:
	rm testprog *.o

testprog: main.o collision_checker.o
	$(CC) $^ -o $@

collision_checker.o: collision_checker.c collision_checker.h
