#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"
void add(struct song_node[27]insert, struct song_node x){
  char [] art = x->artist;
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  insert_order(x,insert[num]) ;
}

struct song_node * search_song(struct song_node[27] insert , char * art, char *song){
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  return return_song(art, song, insert[num]);
}

struct song_node * search_artist(struct song_node[27]insert, char *){
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  return first_song(art,insert[num]);
}
void delete (struct * song_node[27] insert, struct song_node* x){
  char [] art = x->artist;
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  remove_song(x,insert[num]);
}
void print_letter (struct song_node[27]insert, char *letter){
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  print_list(insert[num]);
}
void print_artist (struct song_node[27] insert, char * art){
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  struct song_node * pointer = first_song(art, insert[num]);
  struct song_node * artist_songs[];
  while(strcmp(pointer->artist, art)){
    artist_songs.insert_order(pointer);
    pointer ->next;
  }
  print_list(artist_songs);

}
void print_library (struct * song_node[27] insert){
  for(char i = a; i<z; i++){
  print_letter(insert,i);
}
  print_letter(insert,'?');
}
void shuffle (struct * song_node[27]);
