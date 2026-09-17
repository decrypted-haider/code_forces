#include<stdio.h>
#include<stdbool.h>
int main() {
    int n,p,q;
    scanf("%d",&n);
    scanf("%d",&p);
    bool seen[n];
    for(int i=0;i<n;i++) seen[i]=false;
    int s1[p];
    for(int i=0;i<p;i++) {
        scanf("%d",&s1[i]);
        seen[s1[i]-1]=true;
    }
    scanf("%d",&q);
    int s2[q];
    for(int i=0;i<q;i++) {
        scanf("%d",&s2[i]);
        seen[s2[i]-1]=true;
    }
    bool allPassed=true;
    for(int i=0;i<n;i++)
        if(!seen[i]) {
            allPassed=false;
            break;
        }
    if(allPassed) printf("I become the guy.");
    else printf("Oh, my keyboard!");
    return 0;
}