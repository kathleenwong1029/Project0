#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};
void print_node(struct song_node *);
struct song_node * create_node( char *, char * );
void print_list(struct song_node * );
struct song_node * insert_front(struct song_node *, struct song_node * );
struct song_node * insert_order(struct song_node *, struct song_node *);
struct song_node * free_list(struct song_node * );
struct song_node * return_song(char*, char*, struct song_node *);
struct song_node * first_song(char*, struct song_node *);
struct song_node * random_song(struct song_node *);
struct song_node * remove_song(struct song_node *,struct song_node *);

#endif
