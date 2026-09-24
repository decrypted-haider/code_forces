#include<stdio.h>
int main() {
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    for(int i=0;i<n;i++) {
        scanf("%lld",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        printf("%lld\n",(arr[i]-1)/2);
    }
    return 0;
}