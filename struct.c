#include <stdio.h>

typedef struct list {
  int ugly;
  int height;
  double weight;
  const char *sign;

  struct list *next;
} list;

int main(){

  list test = {1,30,3.12, "asdf", NULL};

  printf("ugly: %d \n", (test).ugly);
  printf("weight: %f \n", test.weight);
  
  list test1 = {3,12,0.23, "gems", &test};

  printf("sign: %s \n", test1.sign);
  

  list *linkedListItem = &test;
  while(linkedListItem != NULL){
    printf("sign: %s \n", (*linkedListItem).sign);
    linkedListItem = (*linkedListItem).next;
  }   

  return 0;
}
