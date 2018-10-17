#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "linked_list.h"


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

struct song_node * return_song(char*a, char*s,struct song_node * root){
  struct song_node *cur = root;
  while(cur){
    if (strcmp(cur->artist,a) == 0){
      if(strcmp(cur->name,s) == 0){
        return cur;
      }
    }
    cur = cur->next;

  }
  return NULL;
}

struct song_node * first_song(char*a, struct song_node *root){
  struct song_node *cur = root->next;
  while(cur){
    if (strcmp(cur->artist,a) == 0){
      return cur;
    }
    cur = cur->next;
    }
    return NULL;
  }
int size(struct song_node *root){
  struct song_node *cur = root;
  int x = 0;
  while (cur){
    x++;
    cur = cur->next;
  }
  return x;
}
struct song_node * random_song(struct song_node *root){
  struct song_node *cur = root;
  srand(time(NULL));
  int num = rand() % size(root);
  while (num){
    cur = cur->next;
    num --;
  }
  return cur;
}
void remove_song(struct song_node *rem, struct song_node *root){
  struct song_node *cur = root;
  struct song_node *prev;
  while(rem != cur && cur){
    prev = cur;
    cur = cur->next;

  }
  if (cur == root){
    root = cur->next;
  }
  prev->next = cur->next;
}
//struct song_node * table[27];
