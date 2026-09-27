#include<stdio.h>
int main() {
    int n;
    int amazing=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int max=arr[0];
    int least=arr[0];
    for(int i=1;i<n;i++) {
        int current=arr[i];
        if(current>max) {
        max=current;
        amazing++; 
        }
        else if(current<least) {
            least=current;
            amazing++;
        }
    }
    printf("%d",amazing);
    return 0;
}