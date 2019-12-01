CC=gcc
all: progmain

progmain: myBank.o  main.o libmyBank.a
	$(CC) -Wall main.o myBank.o -o progmain 

myBank.o: myBank.c
	$(CC) -Wall -c myBank.c -o myBank.o

main.o: main.c libmyBank.a
	$(CC) -Wall -c -o main.o main.c

libmyBank.a: myBank.o 
	ar rcs libmyBank.a myBank.o

clean:
	rm *.o *.a progmain 

.PHONY: clean all







