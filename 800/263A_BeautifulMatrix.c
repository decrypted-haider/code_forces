#include<stdio.h>
int abso(int a) {
    if(a<0) {
        a=a*-1;
    }
    return a;
}
int main() {
    int r,c;
    int arr[5][5];
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1) {
                r=abso(2-i);
                c=abso(2-j);
 
            }
        }
    }
    printf("%d",r+c);
    return 0;
}