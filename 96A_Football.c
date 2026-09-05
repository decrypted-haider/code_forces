#include<stdio.h>
#include<string.h>
int main() {
    int consec=0;
    char s[101];
    int count=0;
    scanf("%s",s);
     
    for(int i=0;i<strlen(s);i++) {
        if(s[i]==s[i+1]) {
            count++;
        }
        else {
            count=1;
        }
        if(count==7) {
            printf("YES");
            break;
        }
        if(i==strlen(s)-1) {
            printf("NO");
        }
    }
    return 0;
}