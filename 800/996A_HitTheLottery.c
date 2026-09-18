#include<stdio.h>
int main() {
    int n;
    int bills100=0;
    int bills50=0;
    int bills20=0;
    int bills10=0;
    int bills5=0;
    int bills1=0;
    int add=0;
    scanf("%d",&n);
    bills100=n/100;
    bills50=(n%100)/50;
    bills20=((n%100)%50)/20;
    bills10=(((n%100)%50)%20)/10;
    bills5=((((n%100)%50)%20)%10)/5;
    bills1=((((n%100)%50)%20)%10)%5;
    add=bills100+bills50+bills20+bills10+bills5+bills1;
    printf("%d",add);
    return 0;
}