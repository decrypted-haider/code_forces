#include<stdio.h>

int strlength(char* s) {
    int length=0;
    while(s[length]!='\0') {
        length++;
    }
    return length;
}
int main () {
    int n,i,len;
    scanf("%d",&n);
    char s[n][101];
    for(i=0;i<n;i++) {
        scanf("%s",s[i]);
    }
    for(i=0;i<n;i++) {
        len=strlength(s[i]);
        if(len>10) {
            printf("%c%d%c\n",s[i][0],len-2,s[i][len-1]);
        } 
        else {
            printf("%s\n",s);
        }
    }
    return 0;
}