#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int greatest,least;
    if(a>b&&a>c) greatest=a;
    else if(b>a&&b>c) greatest=b;
    else greatest=c;
    if(a<b&&a<c) least=a;
    else if(b<a&&b<c) least=b;
    else least=c;
    printf("%d",greatest-least);
    return 0;
}