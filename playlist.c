#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"
void add(struct song_node* x){
  char art[100]= x->artist;
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  insert_order(x,table[num]) ;
}

struct song_node * search_song(char * art, char *song){
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  return return_song(art, song, table[num]);
}

struct song_node * search_artist(, char * art){
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  return first_song(art,table[num]);
}
void delete (struct song_node* x){
  char [] art = x->artist;
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  remove_song(x,table[num]);
}
void print_letter (char *letter){
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  print_list(table[num]);
}
void print_artist (char * art){
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  struct song_node * pointer = first_song(art, table[num]);
  struct song_node * artist_songs[];
  while(strcmp(pointer->artist, art)){
    artist_songs.insert_order(pointer);
    pointer ->next;
  }
  print_list(artist_songs);

}
void print_library (){
  for(char i = a; i<z; i++){
  print_letter(table,i);
}
  print_letter(table,'?');
}
void shuffle (struct song_node[27]){
  srand(time(NULL));
  int num = rand() % 27;
  random_song(table[num]);
  int num1 = rand() % 27;
  random_song(table[num1]);
  int num2 = rand() % 27;
  random_song(table[num2]);
}
void clear (struct song_node[27]){
  for(char i = a; i<z; i++){
  free_list(table,i);
}
  free_list(table,'?');
}
