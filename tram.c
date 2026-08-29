#include<stdio.h>
int main() {
    int current=0;
    int entered=0;
    int exited=0;
    int minimum=0;
    int stops;
    scanf("%d",&stops);
    for(int i=1;i<=stops;i++) {
        scanf("%d%d",&exited,&entered);
        current-=exited;
        current+=entered;
        if(current>minimum) {
            minimum=current;
        }
    }
    printf("%d",minimum);
    return 0;
}