#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main (){

  FILE *pFile;

  char *buffer;

  size_t dataInFile;

  long fileSize;

  pFile = fopen("names.bin", "rb+");

  if(pFile == NULL) {
    //perror("Error");
    //printf("Code: %d\n", errno);
    pFile = fopen("names.bin", "wb+");
    
    if(pFile == NULL){
      exit(errno);
    }
  }

  return 0;
}
      
