#include<stdio.h>

 long long f(long long n) {
        if(n<=0) return 0;
        if(n%2==0) return (long long)n/2;
        return -((long long)n+1)/2;
}

//hasnain solution:
// int solution(int n) {
//     long long sum=0;
//     for(int i=1;i<=n;i++) {
//         long long term=i;
//         if(i%2) term*=(-1);
//         sum+=term;
//     }
//     return sum;
// }

int main() {
    long long n;
    scanf("%lld",&n);
    printf("%lld",f(n));
    return 0;
}