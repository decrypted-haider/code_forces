#include<stdio.h>
int main() {
    int n,h;
    scanf("%d%d",&n,&h);
    int each[n];
    int width=0;
    for(int i=0;i<n;i++){
        width++;
        scanf("%d",&each[i]);
        if(each[i]>h) {
            width++;
        }
    }   
    printf("%d",width);
    return 0;
}