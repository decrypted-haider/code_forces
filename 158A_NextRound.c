#include<stdio.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int pass=0;
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>0 && arr[i]>=arr[k-1]) {
            pass++;
        }
    }
    printf("%d",pass);
    return 0;
}