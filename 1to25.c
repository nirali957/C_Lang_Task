#include<stdio.h>
int main(){
    int a,b,n=1;
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++){
            printf("\t %d",n++);
        }
        printf("\n");
    }
    return 0;
}
