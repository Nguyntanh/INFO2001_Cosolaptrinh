#include <stdio.h>
int main(){
    int a,b,c,n1,n2;
    printf("nhap so a:");
    scanf("%d",&a);
    printf("nhap so b:");
    scanf("%d",&b);
    printf("nhap so c:");
    scanf("%d",&c);
    if(a>b){
        n1=a; 
        a=b; 
        b=n1; 
    }
    if(b>c){
        n2=b; 
        b=c; 
        c=n2; 
    }
    if(a>b){
        n1=a;
        a=b; 
        b=n1; 
    }
    printf("gia tri:%d %d %d", a,b,c);
    return 0;
}
