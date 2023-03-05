#include <stdio.h>

int main() {
  char str[]="SKILL";
  int i,j;
  for(i=0;i<=5;i++){
      for(j=0;j<=i;j++){
          printf("%c",str[i]);
      }
      printf("\n");
  }
  return 0;
}
