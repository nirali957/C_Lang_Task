#include <stdio.h>  
  
int main()  
{  
      
    int i, j, n=5, k = 0;  
     
      
    for ( i =1; i <= n; i++)  
    {  
        for ( j = 1; j <= n - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); 
        }  
        printf ("\n");  
    }  
   return 0;
}  
