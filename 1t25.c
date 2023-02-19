#include<stdio.h>
int main(){
    int i,j,n=1,x=5;
    for(i=1;i<=5;i++){
        n=i;
        for(j=1;j<=5;j++){
            printf("%d ",n);
            n+=x;
        }
        printf("\n");
    }
    return 0;
}
