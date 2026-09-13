#include<stdio.h>
#include<string.h>
int main() {  
    char s1[101];
    char s2[101];
    scanf("%s",s1);
    scanf("%s",s2);
    int len=strlen(s1);
    for(int i=0;i<len;i++) {
        if(s1[i]!=s2[i]) {
            s2[i]='1';
        }
        else s2[i]='0';
    }
    printf("%s",s2);
    return 0;
}