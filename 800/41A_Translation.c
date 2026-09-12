#include<stdio.h>
#include<string.h>
int main() {
    char s[101];
    char t[101];
    int yes=0;
    scanf("%s",s);
    scanf("%s",t);
    int len=strlen(s);
    for(int i=0,j=len-1;i<len,j>=0;i++,j--) {
        if(s[i]==t[j]) {
            yes++;
        }
    }
    if(yes==len) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}