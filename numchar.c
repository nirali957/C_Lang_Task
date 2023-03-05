#include <stdio.h>

int main() {
  int i,j,k=65,n=1;
  for(i=1;i<=5;i++){
      for(j=1;j<=i;j++){
          if(i%2==1){
              printf("%d",n);
              n++;
          }else if(i%2==0){
              printf("%c",k);
              k++;
          }
      }
      printf("\n");
  }
  return 0;
}




1
AB
234
CDEF
56789
