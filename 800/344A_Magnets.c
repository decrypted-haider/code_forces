#include<stdio.h>
int main() {
    int n;
    int groups=0;
    scanf("%d",&n);
    char s[n][2];
    for(int i=0;i<n;i++) {
        scanf("%s",s[i]);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j+=2) {    
            if(s[i][j]!=s[i+1][j]) {
                groups++;                
            }
        }    
    }
    printf("%d",groups);
    return 0;
}