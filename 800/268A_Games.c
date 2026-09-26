#include<stdio.h>
int main() {
    int teams;
    int same=0;
    scanf("%d",&teams);
    int colors[teams][2];
    for(int i=0;i<teams;i++) for(int j=0;j<2;j++) scanf("%d",&colors[i][j]);
    for(int i=0;i<teams;i++) {
        for(int j=0;j<teams;j++) {
            if(i==j) continue;
            if(colors[i][1]==colors[j][0]) same++;
        }
    }
    printf("%d",same);
    return 0;
}