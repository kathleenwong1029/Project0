#include "linked_list.h"
#include "playlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  struct song_node *bob = create_node("wow","bob");
  struct song_node *bee = create_node("ay","bee");
  struct song_node *bozee = create_node("dapper","bozee");
  //print_list(bob);
  struct song_node table[27];
  printf("Testing linked list functions:\n");
  printf("testing print_list:\n");
  print_list(bee);
  printf("testing insert_front:\n");
  insert_front(bob,bee);
  print_list(bee);

  //print_list(bozee);
  printf("testing insert_order:\n");
  insert_order(bozee,bee);
  print_list(bee);
  //testing return_song
  printf("testing random_song:\n");
  print_list(random_song(bee));
  printf("testing return_song:\n");
  print_list(return_song("bob","wow",bee));



  //struct song_node * search_song(char * , char *,struct song_node [27]);
  //struct song_node * search_artist( char *, struct song_node [27]);
  //void print_letter (char *,struct song_node [27] );
  //void print_artist ( char *, struct song_node [27] );
  //void print_library (struct song_node [27] );
  //void shuffle ( struct song_node [27] );
  //void delete (struct song_node*, struct song_node [27]);
  //void clear ( struct song_node [27]);
  //struct song_node table[27];
  //add(bob,table);
  //print_library(table);
  return 0;

}
