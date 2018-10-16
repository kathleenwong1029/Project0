void print_list(struct song_node * );
struct song_node * insert_front(struct song_node *, struct song_node * );
void insert_order(struct song_node *, struct song_node *);
struct song_node * free_list(struct song_node * );
struct song_node * return_song(char[] artist, char[] song);
struct song_node * first_song(char[] artist);
struct song_node * random_song(struct song_node *);
struct song_node * remove_song(struct song_node *);
