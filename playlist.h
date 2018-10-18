struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};
void add(struct song_node * ,struct song_node [27]);
struct song_node * search_song(char * , char *,struct song_node [27]);
struct song_node * search_artist( char *, struct song_node [27]);
void print_letter (char *,struct song_node [27] );
void print_artist ( char *, struct song_node [27] );
void print_library (struct song_node [27] );
void shuffle ( struct song_node [27] );
void delete (struct song_node*, struct song_node [27]);
void clear ( struct song_node [27]);
