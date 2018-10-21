#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "linked_list.h"

void add(struct song_node * ,struct song_node * table[27]);
struct song_node * search_song(char * , char *,struct song_node * table[27]);
struct song_node * search_artist( char *, struct song_node * table[27]);
void print_letter (char ,struct song_node * table[27] );
void print_artist ( char *, struct song_node * table[27] );
void print_library (struct song_node * table[27] );
void shuffle ( struct song_node * table[27] );
void del (struct song_node *, struct song_node * table[27]);
void clear ( struct song_node *table[27]);

#endif
