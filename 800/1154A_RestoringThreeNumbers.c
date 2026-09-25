#include<stdio.h>
int main() {
    int first,second,third,fourth,abc,ab,ac,bc,a,b,c;
    scanf("%d%d%d%d",&first,&second,&third,&fourth);
    if(first>second&&first>third&&first>fourth) {
        abc=first;
        ab=second;
        bc=third;
        ac=fourth;
    }
    else if(second>first&&second>third&&second>fourth) {
        abc=second;
        ab=first;
        bc=third;
        ac=fourth;
    }
    else if(third>first&&third>second&&third>fourth) {
        abc=third;
        ab=first;
        bc=second;
        ac=fourth;
    }
    else {
        abc=fourth;
        ab=first;
        bc=second;
        ac=third;
    }
    c=abc-ab;
    b=bc-c;
    a=ac-c;
    printf("%d%d%d",a,b,c);
    return 0;
}