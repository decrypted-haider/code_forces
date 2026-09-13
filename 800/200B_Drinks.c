#include<stdio.h>
int main() {
    int n;
    float sum=0.0;
    scanf("%d",&n);
    float s[n];
    for(int i=0;i<n;i++) {
        scanf("%f",&s[i]);
        sum+=s[i];
    }
    printf("%f",sum/n);
    return 0;
}