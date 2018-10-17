struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};
void print_list(struct song_node * );
struct song_node * insert_front(struct song_node *, struct song_node * );
void insert_order(struct song_node *, struct song_node *);
void free_list(struct song_node * );
struct song_node * return_song(char*, char*, struct song_node *);
struct song_node * first_song(char*, struct song_node *);
struct song_node * random_song(struct song_node *);
void remove_song(struct song_node *,struct song_node *);
