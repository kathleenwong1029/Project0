struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};
void add(struct song_node * ,struct song_node [27]);
struct song_node * search_song(char * , char *,struct song_node [27]);
struct song_node * search_artist( char *, struct song_node [27]);
void print_letter (char * );
void print_artist ( char * );
void print_library ();
void shuffle ();
void delete (struct song_node*, struct song_node [27]);
void clear ();
