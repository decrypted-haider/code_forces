#include<stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int s[t][2];
    int moves=0;
    for(int i=0;i<t;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d",&s[i][j]);
        }
    }
    for(int i=0;i<t;i++) {
        // moves=0;
        // if(s[i][0]%s[i][1]==0) {
        //     printf("%d\n",moves);
        //     continue;
        // }
        
        // else {   
        //     while(s[i][0]%s[i][1]!=0) {
        //     s[i][0]++;
        //     moves++;
        //     }
        // }
        // hasnain solution:
        int curr = s[i][0]/s[i][1];
        if(curr*s[i][1]==s[i][0]) moves=0;
        else {
            int diff = s[i][1]*(curr+1);
            moves = diff - s[i][0];
        }
        printf("%d\n",moves);
    }
    return 0;
}