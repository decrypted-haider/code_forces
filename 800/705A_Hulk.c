#include<stdio.h>

void solution(int n) {
    for(int i=1;i<n;i++) {
        if(i%2) printf("I hate that ");
        else    printf("I love that ");
    }
    if(n%2) printf("I hate it");
    else    printf("I love it");
}

int main() {
    int n;
    scanf("%d",&n);
    solution(n);
    return 0;
}