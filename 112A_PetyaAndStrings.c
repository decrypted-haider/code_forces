#include<stdio.h>
#include<string.h>
#include<ctype.h>

int solution(char s1[],char s2[]) {
    int c1,c2;
    for(int i=0;;i++) {
        c1=tolower(s1[i]);
        c2=tolower(s2[i]);
        if(c1>c2) return 1;
        else if(c1<c2) return -1;
        if(i==strlen(s1)-1) return 0;
    }

}

int main() {
    char s1[101];
    char s2[101];
    scanf("%s",s1);
    scanf("%s",s2);
    
    printf("%d",solution(s1,s2));

    return 0;
}