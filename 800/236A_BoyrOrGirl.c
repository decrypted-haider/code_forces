#include<stdio.h>
#include<string.h>

void isGoB(char s[]) {
    int eord=strlen(s);
    for(int i=0;i<strlen(s);i++) {
        for(int j=i+1;j<strlen(s);j++) {
            if(s[i]==s[j]) {
                eord-=1;
            }
        }
    }
    if(eord%2==0) {
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }
}
//hasnain solution:
// void solution(char s[]) {
//     int count=0;
//     int freq[26]={0};
//     for(int i=0;s[i]!='\0';i++) {
//         if(freq[s[i]-'a']==0) count++;
//         freq[s[i]-'a']=1;
//     }
//     if(count%2==0) printf("CHAT WITH HER!");
//     else printf("IGNORE HIM!");
// }

int main() {
    char s[101];
    scanf("%s",s);
    solution(s);
    return 0;
}