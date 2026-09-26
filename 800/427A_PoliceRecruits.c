#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int police=0;
    int uc=0;
    int crime=-1;
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n;i++) {
        if(arr[i]==crime) {
            if(police>0) police--;
            else uc++;
        }
        else police+=arr[i];
    }
    printf("%d",uc);
    return 0;
}