all: main.o linked_list.o playlist.o
	gcc -o main.out main.o linked_list.o playlist.o

main.o: main.c linked_list.h playlist.h
	gcc -c main.c 
linked_list.o: linked_list.c linked_list.h
	gcc -c linked_list.c 

playlist.o: playlist.c playlist.h linked_list.h
	gcc -c playlist.c 


run:
	make
	./main.out
clear:
	rm a.out
	rm *.o
