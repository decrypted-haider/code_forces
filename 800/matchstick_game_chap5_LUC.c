#include<stdio.h>
int main() {
    int n=21;
    for(int i=0;i<4;i++) {
        int user=0;
        int comp=0;
        printf("\nUser's Turn: \n");
        scanf("%d",&user);
        n=n-user;
        comp=5-user;
        printf("Computer picks: \n%d",comp);
        n=n-comp;
        if(n==1) {
            printf("\nGame Over");
            break;
        }
    }
    return 0;
}