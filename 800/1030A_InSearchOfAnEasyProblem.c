#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++) scanf("%d",&s[i]);
    int is=0;
    for(int i=0;i<n;i++) if(s[i]>0) is++;
    if(is>0) printf("HARD");
    else printf("EASY");
    return 0;
}