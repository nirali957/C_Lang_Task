#include <stdio.h>
int main()
{
    int i, j, k = 0, p, sp = 5;
    for (i = 1; i <= 5; i++)

    {
        k = k + i;
        p = k;
        for (j = 1; j <= sp; j++)
            printf("\t");
        for (j = 1; j <= i; j++)
        {
            printf("  %d ", p);
            p--;
        }
        printf("\n");
        sp--;
    }
    return 0;
}









              1 
				  3   2 
      6   5   4 
 10   9   8   7 
