#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    int n[t];
    for(int i=0;i<t;i++) scanf("%d",&n[i]);
    for(int i=0;i<t;i++) {
            if(n[i]%3==0) printf("Second\n");
            else printf("First\n");
    }
    return 0;
}