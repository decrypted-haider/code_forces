#include<stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(int i=0;i<n;i++) {
        if(s[i]==s[i+1]) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}