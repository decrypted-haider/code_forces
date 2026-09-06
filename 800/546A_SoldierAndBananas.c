#include<stdio.h>
int main() {
    int price,balance,amount;
    int totalprice=0;
    scanf("%d%d%d",&price,&balance,&amount);
    for(int i=1;i<=amount;i++) {
        totalprice=totalprice+price*i;
    }
    if(totalprice<balance) {
        printf("0");
    }
    else printf("%d",totalprice-balance);
    return 0;
}