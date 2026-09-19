#include<stdio.h>
int length(char s[]) {
    int length=0;
    for(int i=0;s[i]!='\0';i++) length++;
    return length;
}
int main() {
        int n,len;
        int faces=0;
        scanf("%d",&n);
        char s[n][13];
        for(int i=0;i<n;i++) {
            scanf("%s",s[i]);  
        }  
        for(int i=0;i<n;i++) {
            len=length(s[i]);
            if(len==11&&s[i][0]=='T') faces+=4;
            if(len==4) faces+=6;
            if(len==10) faces+=8;
            if(len==12) faces+=12;
            if(len==11&&s[i][0]=='I') faces+=20;
        }
        printf("%d",faces);
        return 0;
}