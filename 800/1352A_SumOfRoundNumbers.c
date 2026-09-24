#include<stdio.h>

int NonZ(int n) {
    int nonz=0;
    if(n==0) return nonz;
    while(n) {
        if(n%10!=0) nonz++;
        n/=10;
    }
    return nonz;
}

int main() {
    int k;
    scanf("%d",&k);
    int arr[k];
    for(int i=0;i<k;i++) scanf("%d",&arr[i]);
    for(int i=0;i<k;i++) {
        int nonZero=NonZ(arr[i]);
        printf("%d\n",nonZero);
        int mul=1;
        while(arr[i]) {
            if(arr[i]%10!=0) {
                printf("%d ",(arr[i]%10)*mul);
                nonZero--;
            }
            arr[i]/=10;
            mul*=10;
        }
        printf("\n");
    }
    return 0;
}