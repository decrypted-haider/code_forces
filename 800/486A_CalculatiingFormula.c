#include<stdio.h>

 int f(int n) {
      int result=0;
      for(int i=1;i<=n;i++) {
          result+=i;
          result*=-1;
      }
      if(n%2==0) return result*-1;
      return result;
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
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}