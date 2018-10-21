#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "linked_list.h"

struct song_node * create_node( char * song, char * art){
  struct song_node * new = malloc(sizeof(struct song_node));
  strcpy(new->name, song);
  strcpy(new->artist, art);
  return new;
}

void print_list(struct song_node * currentNode){
  if (currentNode == NULL){
    printf("NULL");
  }
  while(currentNode){
    printf("%s by artist %s \n", currentNode->name, currentNode->artist);
    currentNode = currentNode->next;
  }
}

struct song_node * insert_front(struct song_node * root, struct song_node * add){
  add -> next = root;
  return add;
}

struct song_node* insert_order(struct song_node * add, struct song_node *root){
  if(root == NULL || strcmp(add -> artist,root->artist) < 0){
    return insert_front(root,add);
  }
  if(strcmp(add->artist,root->artist)==0){
    if(strcmp(add->name,root->name) < 0){
      insert_front(root,add);
      return add;
    }
  }

  struct song_node * cur = root;

  while((cur->next) && strcmp(add->artist,cur->artist) > 0){
    cur = cur->next;
  }
  if(strcmp(add->artist,cur->artist)==0){
    if(strcmp(add->name,cur->name) < 0){
      insert_front(cur,add);
      return root;
    }
  }
  cur->next = insert_front(cur->next,add);
  return root;
}

struct song_node * free_list(struct song_node *root ){
  struct song_node * pointer;
  while(root){
    pointer = root->next;
    free(root);
    root = pointer;
  }
  return root;
}

struct song_node * return_song(char* a, char* s,struct song_node * root){
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
struct song_node * remove_song(struct song_node *rem, struct song_node *root){
  if (root == rem){
    return rem->next;
  }
  struct song_node *cur = root;
  struct song_node *prev;
  while(rem != cur && cur){
    prev = cur;
    cur = cur->next;

  }
  prev->next = cur->next;
  return root;
}
//struct song_node * table[27];
