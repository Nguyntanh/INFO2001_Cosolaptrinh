#include <stdio.h>
int main(){
    int ngay, thang, nam;
    printf("nhap ngay:");
    scanf("%d", &ngay);
    printf("nhap thang:");
    scanf("%d", &thang);
    printf("nhap nam:");
    scanf("%d", &nam);
    int Hople=1;
    if(ngay<1 || thang<1 || thang>12 || nam<1)
    Hople=0;
    else{
        int NgayTrongThang;
        if(thang==2){
            if(nam%4==0)
            NgayTrongThang=29;
            else
            NgayTrongThang=28;
        }
        else if(thang==4 || thang==6 || thang==9 || thang==11){
            NgayTrongThang=30;
        }
        else{
            NgayTrongThang=31;
        }
        if(ngay>NgayTrongThang)
        Hople=0;
    }
    if(Hople){
        int NgayTruocDo=ngay-1;
        int ThangTruocDo=thang;
        int NamTruocDo=nam;
        if(NgayTruocDo==0){
            if(thang==1){
                NgayTruocDo=31;
                ThangTruocDo=12;
                NamTruocDo--;
            }
            else if(thang==3){
                if(nam%4==0)
                NgayTruocDo=29;
                else
                NgayTruocDo=28;
                ThangTruocDo=2;
            }
            else if(thang==4 || thang ==6 || thang==9 || thang==11){
                NgayTruocDo=31;
                ThangTruocDo--;
            }
            else{
                NgayTruocDo=30;
                ThangTruocDo--;
            }
        }
        printf("ngay truoc do la:%d/%d/%d", NgayTruocDo, ThangTruocDo, NamTruocDo);
    }
    return 0;
}
