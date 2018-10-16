#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"
struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};

void print_list(struct song_node * currentNode){
  while(currentNode){
    printf("%c : % c ", currentNode->name, currentNode->artist);
    currentNode = currentNode->next;
  }
}

struct song_node * insert_front(struct song_node * root, struct song_node * add){
  add = (struct song_node *add)malloc(sizeof(struct song_node));
  add -> next = root;
  return add;
}
void insert_order(struct song_node * add, struct song_node *root){
  insert_front(root,add);
  struct song_node * nextone = root;
  while(strcmp(add->name,next->name) > 0){
    nextone = nextone -> next;
    add->next = nextone;
  }
}


//struct song_node * table[27];
