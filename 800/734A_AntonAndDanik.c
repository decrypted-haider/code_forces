#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d",&n);
    char s[n];
    int ant=0;
    int dan=0;
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++) {
        if(s[i]=='A') {
            ant++;
        }
        else {
            dan++;
        }
    }
    if(ant>dan) {
        printf("Anton");
    }
    else if(dan>ant) {
        printf("Danik");
    }
    else {
        printf("Friendship");
    }
    return 0;
}