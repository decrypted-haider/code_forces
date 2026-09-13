#include<stdio.h>
#include<string.h>
int main() {
    int n,t;
    scanf("%d%d",&n,&t);
    char s[n+1];    
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<t;i++) {
        for(int j=0;j<len;j++) {
            if(s[j]=='B'&&s[j+1]=='G') {
                s[j]=s[j]+s[j+1];
                s[j+1]=s[j]-s[j+1];
                s[j]=s[j]-s[j+1];
                j++;
            }
        }
    }
    printf("%s",s);
    return 0;
}