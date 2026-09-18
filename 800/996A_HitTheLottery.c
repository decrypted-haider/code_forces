#include<stdio.h>
int main() {
    int n;
    int bills=0;
    int denom[]={100,20,10,5,1};
    scanf("%d",&n);
    for(int i=0;i<5;i++) {
        bills+=n/denom[i];
        n=n%denom[i];
    }
    printf("%d",bills);
    return 0;
}