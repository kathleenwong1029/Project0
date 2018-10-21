#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "playlist.h"
#include "linked_list.h"
void add(struct song_node * x,struct song_node * table[27]){
  char art[100];
  strcpy(art, x->artist);
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  table[num] = insert_order(x, table[num]);
  printf("added %s by %s!\n" , x->name,x->artist);
}

struct song_node * search_song(char * art, char *song, struct song_node * table[27]){
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  printf("Artist found at %p\n", return_song(art, song, table[num]));
  return return_song(art, song, table[num]);
}

struct song_node * search_artist( char * a, struct song_node * table[27]){
  char letter= a[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  printf("%p\n",first_song(a,table[num]));
  return first_song(a,table[num]);
}
void del (struct song_node * x,struct song_node * table[27]){
  char art[100];
  strcpy(art, x->artist);
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  table[num] = remove_song(x,table[num]);
}
void print_letter (char letter, struct song_node * table[27]){
  char a= letter;
  int num = 0;
  if (a >= 'a' && a <= 'z'){
    num = a - 'a';
  }
  else{
    num = 26;
  }
  print_list(table[num]);
}

void print_artist (char * art, struct song_node * table[27]){
  char letter = art[0];
  int num;
  if (letter >= 'a' && letter <= 'z'){
    num = letter - 'a';
  }
  else{
    num = 26;
  }
  struct song_node * pointer = first_song(art,table[num]);
  struct song_node * artist_songs;
  while(strcmp(pointer->artist, art)){
    insert_order(pointer,artist_songs);
    pointer = pointer -> next;
  }
  print_list(artist_songs);

}
void print_library (struct song_node * table[27]){
  for(char i = 'a'; i<= 'z'; i++){
  print_letter(i,table);
  printf("||");
}
  char x = '?';
  print_letter(x,table);
  printf("\n");
}
void shuffle ( struct song_node * table[27]){
  srand(time(NULL));
  int num = rand() % 27;
  struct song_node * one = random_song(table[num]);
  int num1 = rand() % 27;
  struct song_node * two = random_song(table[num1]);
  int num2 = rand() % 27;
  struct song_node * three = random_song(table[num2]);
  printf("%s by artist %s,%s by artist %s,%s by artist %s\n",one->name,one->artist,two->name,two->artist,three->name,three->artist);
}
void clear (struct song_node * table[27]){
  for(int i = 0 ; i<27; i++){
  free_list(table[i]);
}
printf("Freed the list!\n");
}
