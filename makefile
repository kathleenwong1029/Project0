all: main.o linked_list.o playlist.o
	gcc main.o linked_list.o playlist.o

main.o: main.c linked_list.h
	gcc -c main.c linked_list.h

linked_list.o: linked_list.c linked_list.h
	gcc -c linked_list.c linked_list.h

playlist.o: playlist.c playlist.h linked_list.h
	gcc -c playlist.c playlist.h linked_list.h

run:
	./a.out
