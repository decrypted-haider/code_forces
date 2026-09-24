#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        if(arr[i]<=2) printf("0\n");
        else {
            int current=arr[i]/2;
            if(current%2==0) printf("%d\n",current-1);
            else printf("%d\n",current);
        }
    }
    return 0;
}