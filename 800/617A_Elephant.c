#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int steps;
    steps=x/5;
    if(x%5!=0) {
        steps++;
    }
    printf("%d",steps);
    return 0;
}