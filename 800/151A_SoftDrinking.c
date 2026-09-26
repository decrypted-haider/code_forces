#include<stdio.h>
int main() {
    int nFriends,kBottles,lML,cLimes,dSlices,pSalt,nlReqML,npReqSalt;
    int reqSlices=1;
    scanf("%d%d%d%d%d%d%d%d",&nFriends,&kBottles,&lML,&cLimes,&dSlices,&pSalt,&nlReqML,&npReqSalt);
    int toasts=0;
    int total_ML=kBottles*lML;
    int total_slices=cLimes*dSlices;
    int total_salt=pSalt;
    if((total_salt<npReqSalt)||(total_ML<nlReqML)||(total_slices<reqSlices)) printf("0");
    else {
        while((total_ML>=nlReqML)&&(total_slices>=1)&&(total_salt>=npReqSalt)) {
            toasts++;
            total_slices-=reqSlices;
            total_salt-=npReqSalt;
            total_ML-=nlReqML;
        }
        printf("%d",toasts/nFriends);
    }
    return 0;
}