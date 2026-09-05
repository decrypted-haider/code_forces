#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int first,second,third;
    int result=0;
    int out=0;
    for(int i=0;i<n;i++) {
        scanf("%d%d%d",&first,&second,&third);
        result=first+second+third;
        if(result>=2) {
            out++;
        }
    }
    printf("%d",out);
    return 0;
}