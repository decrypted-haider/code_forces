#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main() {
    char s1[101];
    char s2[101];
    char s3[101];
    scanf("%s%s%s",s1,s2,s3);
    int len1=strlen(s1);
    int len2=strlen(s2);
    int len3=strlen(s3);
    if(len1+len2!=len3) {
        printf("NO");
        return 0;
    }
    int freq1[26]={0};
    for(int i=0;i<len1;i++) freq1[s1[i]-'A']+=1;
    for(int i=0;i<len2;i++) freq1[s2[i]-'A']+=1;
    int freq2[26]={0};
    for(int i=0;i<len3;i++) freq2[s3[i]-'A']+=1;
    int yes=1;
    for(int i=0;i<26;i++) {
        if(freq1[i]!=freq2[i]) {
            yes--;
            break;
        }
    }
    if(yes==1) printf("YES");
    if (yes==0) printf("NO");

    return 0;
}