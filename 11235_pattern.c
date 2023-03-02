#include <stdio.h>

int main() {
  int i,a,b,c;
  a=1;
  b=1;
  printf("%d ",a);
  printf("%d ",b);
  for(i=1;i<=10;i++){
      c=a+b;
      printf("%d ",c);
      a=b;
      b=c;
  }
  return 0;
}
 1 1 2 3 5 8 ............
