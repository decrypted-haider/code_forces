#include<stdio.h>

int minimum(int arr[],int size) {
    int minIdx=0;
    for(int i=1;i<size;i++) {
        if(arr[i]<=arr[minIdx]) minIdx=i;
    }
    return minIdx;
}
int maximum(int arr[],int size) {
    int maxIdx = 0;
    for(int i=1;i<size;i++) {
        if(arr[i]>arr[maxIdx])maxIdx=i;
    }
    return maxIdx;
}

int main() {
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&s[i]);    
    }
    int moves=0;
    int minIdx = minimum(s,n);
    int maxIdx = maximum(s,n);
    
    if(minIdx<maxIdx) moves-=1;    
    while(maxIdx!=0) {
        maxIdx--;
        moves++;
        }
    while(minIdx!=n-1) {
        minIdx++;
        moves++;
    }
    printf("%d",moves);
    return 0;
}