#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct array{

  int n;
  char* val;
  //char val[30];
  struct array *next;
  struct array *prev;
} array;

int main(){
  int i = 0;

  array *ar;
  array *t = NULL;
  array *first = NULL;

  while(1){
  char temp[50];
//  while(1){
    printf("please enter a string, when you are done enter 'q'\n");
    //scanf("%s", &temp[0]);
    fgets(&temp[0], 30, stdin);
    temp[strcspn(temp,"\n")] = '\0';
 
    if(!strcmp(temp, "q\0")){
      (*ar).next = first;
      (*first).prev = ar;
      break;
    }

    (*ar).prev = t;
    (*ar).next = malloc(sizeof(array));
    ar = (*ar).next;
    //strcpy((*ar).val, temp);
    (*ar).val = malloc(sizeof(temp));
    strcpy((*ar).val, temp);
    (*ar).n = i++;


    if(first == NULL){
      first = ar;
    }

    t = ar; 
  }

  array *p = first;
  array *n = (*p).next;

  do{
    printf("n: %d\n val: %s\n", (*p).n,(*p).val);
    p = (*p).next;
    n = (*p).next;
  }while((*p).n);

  return 0;
}
