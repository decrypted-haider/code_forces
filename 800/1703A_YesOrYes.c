#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char s[n][3];
    for(int i=0;i<n;i++) scanf("%s",s[i]);
    for(int i=0;i<n;i++) {
        if((s[i][0]=='Y'  ||  s[i][0]=='y')
         &&(s[i][1]=='E'  ||  s[i][1]=='e')
         &&(s[i][2]=='S'  ||  s[i][2]=='s')) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}