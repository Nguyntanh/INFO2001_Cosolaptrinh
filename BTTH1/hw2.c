#include <stdio.h>
#include <string.h>

struct SinhVien{
    char hoten[50];
    char masv[50];
    int tuoi;
    double gpa;
};

typedef struct SinhVien SinhVien;

SinhVien nhap(SinhVien x){
    printf("Nhap ten : ");
    gets(x.hoten);
    printf("Nhap ma sinh vien : ");
    gets(x.masv);
    printf("Nhap tuoi: ");
    scanf("%d",&x.tuoi);
    printf("Nhap gpa : ");
    scanf("%lf", &x.gpa);
    getchar(); 
    return x;
}

void nhapDS(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap thong tin cho sinh vien thu %d : \n", i + 1);
        a[i] = nhap(a[i]); 
    }
}

void xuat(SinhVien x){
    printf("------------------------\n");
    printf("Ho ten : %s\n", x.hoten);
    printf("Ma sinh vien : %s\n", x.masv);
    printf("Tuoi: ",x.tuoi);
    printf("Gpa : %.2lf\n", x.gpa);
    printf("------------------------\n");
}

void xuatDS(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        printf("Thong tin sinh vien thu %d :\n", i + 1);
        xuat(a[i]);
    }
}


int main(){
    SinhVien dssv[50];
    int n; 
    printf("Nhap so luong sinh vien : ");
    scanf("%d", &n);
    getchar();
    nhapDS(dssv, n);
    xuatDS(dssv, n);
    return 0;
}