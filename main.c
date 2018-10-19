#include "linked_list.h"
#include "playlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  struct song_node *bob = create_node("wow","bob");
  print_list(bob);
  //struct song_node table[27];
  //add(bob,table);
  //print_library(table);
  return 0;

}
