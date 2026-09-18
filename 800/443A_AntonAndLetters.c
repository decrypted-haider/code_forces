#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main() {
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int letters=0;
    int len=strlen(s);
    bool freq[26]={false};
    for(int i=1;i<=len;i+=3) {

        freq[s[i]-'a']=true;
    }
    for(int i=0;i<26;i++) {
        if(freq[i]) letters++;
    }
    printf("%d",letters);
    return 0;
}