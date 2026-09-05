#include<stdio.h>
int main() {
    int limak,bob;
    int years=0;
    scanf("%d%d",&limak,&bob);
        while(limak<=bob) {
            years+=1;
            limak*=3;
            bob*=2;
        }
    printf("%d",years);
    return 0;
}
