#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

struct node *insert_front(struct node * a, int b){
  struct node *y = (struct node *) malloc(sizeof(struct node));
  y->i = b;
  y->next = a;
}

struct node *free_list(struct node * a){
  struct node *go = a->next;

  free(a);

  if (go){
    free_list(go);
  }
}

void print_list(struct node * a){
  struct node *go = a->next;

  printf("%d\t", a->i);

  if (go){
    print_list(go);
  }
  else{
    printf("\n");
  }
}

int main(){
  struct node one;
  one.i = 1;
  one.next = 0;

  struct node *two = insert_front(&one, 2);
  printf("1 is the root; 2 has been inserted:\n");
  print_list(two);

  struct node *three = insert_front(two, 2);
  printf("3 has been inserted:\n");
  print_list(three);

  
  printf("Freeing list; print_list should not print:\n");
  free_list(three);
  print_list(three);
}
