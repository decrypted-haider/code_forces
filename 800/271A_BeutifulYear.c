#include<stdio.h>

int isBeautiful(int year) {
    int a,b,c,d;
    a=year%10;
    b=year/10%10;
    c=year/100%10;
    d=year/1000;
    if((a!=b&&a!=c&&a!=d)&&(b!=a&&b!=c&&b!=d)&&(c!=a&&c!=b&&c!=d)&&(d!=a&&d!=b&&d!=c)) return 1;
    return 0;
}

int solution(int year) {
    do {
    year++;
    } while(!isBeautiful(year));    
    return year;
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",solution(n));
    return 0;
}