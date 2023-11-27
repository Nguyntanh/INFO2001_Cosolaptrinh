#include <stdio.h>

void bubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int tmp=a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int a[10]={2,4,5,1,7,9,3,6,10,8};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Initial array:\n");
    printArray(a,n);
    printf("Array after sorting:\n");
    bubbleSort(a,n);
    printArray(a,n);
    return 0;
}