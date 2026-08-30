#include<stdio.h>
int main() {
    int n,x=0;
    char first,second,third;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf(" %c%c%c",&first,&second,&third);
        if(second=='+') {
            x++;
        }
        else {
            x--;
        }
    }
    printf("%d",x);
    return 0;
}