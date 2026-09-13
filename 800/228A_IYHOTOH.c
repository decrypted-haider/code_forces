#include<stdio.h>
int main() {
    int a,b,c,d;
    int shoe=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==b||a==c||a==d) shoe++;
    if(b==c||b==d) shoe++;
    if(c==d) shoe++;
    printf("%d",shoe);
    return 0;
}