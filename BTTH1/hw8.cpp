#include <stdio.h>
int main(){
    int n;
    printf("nhap so nguyen n:");
    scanf("%d",&n);
    int hangTram=n/100;
    int hangChuc=(n/10)%10;
    int hangDonvi=n%10;
    int chusolonnhat;
    char vitri[20];
    if(hangTram>hangChuc && hangTram>hangDonvi){
        chusolonnhat=hangTram;
        sprintf(vitri,"hang tram");
    }
    else if(hangChuc>hangTram && hangChuc>hangDonvi){
        chusolonnhat=hangChuc;
        sprintf(vitri,"hang chuc");
    }
    
    else{
        chusolonnhat=hangDonvi;
        sprintf(vitri,"hang don vi");
    }
    printf("chu so lon nhat la:%d va nam o vi tri:%s\n",chusolonnhat,vitri);
    return 0;
}
