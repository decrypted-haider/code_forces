#include<stdio.h>
int main() {
    int n;
    int room=0;
    scanf("%d",&n);
    int s[n][2];
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d",&s[i][j]);
        }
    }
    for(int i=0;i<n;i++) {
        if(s[i][1]-s[i][0]>=2){
            room++;
        }
    }
    printf("%d",room);
    return 0;
}