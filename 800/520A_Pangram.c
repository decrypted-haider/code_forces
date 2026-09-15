#include<stdio.h>
#include<stdbool.h>
char mytolow(char ch) {
    return (ch>=65&&ch<=90)?ch+32:ch;
}

int main() {
    int n;
    int add=26;
    scanf("%d",&n);
    char s[n];
    bool freq[26]={false};
    scanf("%s",s);
    for(int i=0;i<n;i++) {
        s[i]=mytolow(s[i]);
    }
    if(n<26) {
        printf("NO");
    }
    else {
        for(int i=0;i<n;i++) {
           freq[s[i]-'a']=true;
        }
        for(int i=0;i<26;i++) {
            if(freq[i]!=true) add--;
        }
        if(add==26) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    return 0;
}