#include<stdio.h>
int main() {
    int n;
    int a=5;
    int first,second;
    scanf("%d",&n);
    for(int i=0;i<n;i++) a*=5;
    second=a%10;
    a/=10;
    first=a%10;
    printf("%d%d",first,second);
    return 0;
}