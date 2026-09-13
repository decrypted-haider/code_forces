#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int s1[n],s2[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&s1[i]);
    }

    for(int i=0;i<n;i++) {
        s2[s1[i]-1]=i+1;        
    }

    for(int i=0;i<n;i++) {
        printf("%d ",s2[i]);
    }
    return 0;
}


