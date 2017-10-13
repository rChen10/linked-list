#include <stdio.h>
#include "headers.h"

struct node *insert_front(struct node * a, int b){
  struct node * y = malloc(sizeof(struct node));
  y.i = b;
  y.next = a;
}

struct node *free_list(struct node * a){
  struct node *go = a.next;

  free(a);

  if (!go){
    free_list(go);
  }
}

void print_list(struct node * a){
  struct node *go = a.next;

  printf("%d\t", a.i);

  if (!go){
    print_list(go);
  }
  else{
    printf("\n", a.i);
  }
}

int main(){
  struct node one 
}
