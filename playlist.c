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
  insert_order(x,insert[num]) 
}
