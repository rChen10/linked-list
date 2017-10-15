struct node { int i; struct node *next };
void print_list(struct node * a);
struct node * free_list(struct node * a);
struct node * insert_front(struct node * a, int b);
