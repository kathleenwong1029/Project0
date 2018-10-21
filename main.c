#include "linked_list.h"
#include "playlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //testing linked_list methods
  struct song_node *bob = create_node("wow","bob");
  struct song_node *bee = create_node("ay","bee");
  struct song_node *bozee = create_node("dapper","bozee");
  struct song_node *bob2 = create_node("mops","bob");
  struct song_node *mac = create_node("self care","mac");
  struct song_node *perry = create_node("goop","perry");
  struct song_node *no= create_node("yes","no");
  struct song_node * table[27];
  int x = 0;
  while(x<27){
    table[x] = NULL;
    x++;
  }
  printf("TESTING LINKED LIST FUNCTIONS:\n");
  printf("TESTING  print_list:\n");
  print_list(bee);
  printf("TESTING  insert_front:\n");
  insert_front(bob,bee);
  print_list(bee);
  printf("TESTING insert_order:\n");
  insert_order(bozee,bee);
  print_list(bee);
  printf("TESTING random_song:\n");
  struct song_node *rando = random_song(bee);
  printf("%s by artist %s \n", rando->name, rando->artist);
  printf("TESTING return_song:\n");
  rando = return_song("bob","wow",bee);
  printf("%s by artist %s \n", rando->name, rando->artist);
  printf("TESTING remove_song(removed bozee):\n");
  remove_song(bozee,bee);
  print_list(bee);
  free_list(no);

  //testing playlist functions
  printf("------------\n");
  printf("TESTING PLAYLIST FUNCTIONS:\n");
  printf("TESTING add and print_library(includes print_letter):\n");
  add(bob,table);
  add(bob2,table);
  add(bozee,table);
  add(bee,table);
  add(mac,table);
  add(perry,table);
  print_library(table);
  printf("TESTING search_song:\n");
  search_song("bob","mops",table);
  printf("TESTING search_artist(should return the pointer above):\n");
  search_artist("bob",table);
  printf("TESTING print_letter for the letter b:\n");
  print_letter('b',table);
  printf("TESTING delete(deleting perry):\n");
  del(perry,table);
  print_library(table);
  printf("TESTING clear:\n");
  clear(table);

  return 0;

}
