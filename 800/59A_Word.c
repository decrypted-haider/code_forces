#include<stdio.h>
#include<string.h>
int main() {
    char s[101];
    int cap=0;
    int small=0;
    scanf("%s",s);

    for(int i=0;i<strlen(s);i++) {
        if(s[i]>='A'&&s[i]<='Z') {
            cap++;
        } else {
            small++;
        }
    }
    for(int i=0;i<strlen(s);i++) {
        if(small>cap||cap==small) {
            if(s[i]>='a') {
                continue;
            } else {
                s[i]+=32;
            } 
        }
        if(cap>small) {
            if(s[i]>='A'&&s[i]<='Z') {
                continue;
            } else {    
                s[i]-=32;
            }
        }
    }
    printf("%s",s);
    return 0;
}