#include <stdio.h>

int main() {
   int i=1,k=1;
   while(i<=5){
       int j=1;
       while(j<=i){
           if(k%2==1){
               printf("1");
           }else
           {
               printf("0");
           }
           j++;
           k++;
       }
       i++;
       printf("\n");
   }
   return 0;
  
}
1
01
010
1010
10101

   
   
   #include <stdio.h>

int main() {
   int i,j,k=1;
   for(i=1;i<=5;i++){
      
       for(j=1;j<=i;j++){
           printf("%d ",k++%2);
       }
      
       printf("\n");
   }
   return 0;
  
}
