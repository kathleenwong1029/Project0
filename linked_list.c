#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

song_node * root;
void print_list(struct song_node * currentNode){
  while(currentNode){
    printf("%s : %s ", currentNode->name, currentNode->artist);
    currentNode = currentNode->next;
  }
}

struct song_node * insert_front(struct song_node * root, struct song_node * add){
  add = (struct song_node *)malloc(sizeof(struct song_node));
  add -> next = root;
  return add;
}
void insert_order(struct song_node * add, struct song_node *root){
  insert_front(root,add);
  struct song_node * nextone = root;
  while(strcmp(add->name,nextone->name) > 0){
    nextone = nextone -> next;
    add->next = nextone;
  }
}

void free_list(struct song_node *root ){
  struct song_node * pointer;
  while(root){
    pointer = root->next;
    free(root);
    root = pointer;
  }
}

struct song_node * return_song(char[] a, char[] s){
  cur = root->next;
  while(cur){
    if (strcmp(cur->artist,a) == 0){
      if(strcmp(cur->song,s) == 0){
        return cur;
      }
    cur = cur->next;
    }
  }
}

struct song_node * first_song(char[] a){
  cur = root->next;
  while(cur){
    if (strcmp(cur->artist,a) == 0){
      return cur;
    }
    cur = cur->next;
    }
  }
struct song_node * random_song(){
  //FIX LATER!!!!!!!!!!!!!!!!!!!!!
  srand(time(NULL));
  num = rand();
}
//struct song_node * table[27];
