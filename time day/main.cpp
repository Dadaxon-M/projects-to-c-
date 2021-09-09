#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int d,oy,yil,h,m,s,kir=0,sikl=0;
    while(kir==0){
        cout<<"kunni kiriting..."; cin>>d;
        cout<<"oyni kiriting..."; cin>>oy;
        cout<<"yilni kiriting..."; cin>>yil;
        cout<<"soatni kiriting..."; cin>>h;
        cout<<"minutni kiriting..."; cin>>m;
        cout<<"sekuntni kiriting..."; cin>>s;
        if(d<=31 && oy<=12 && h<=23 && m<=60 && s<=60){
            kir+=1;
        }
        else {
            system("cls");
        }
    }
    while(sikl==0){
    cout << h<<":"<<m<<":"<<s<<"\n"<<"data "<<d<<"/"<<oy<<"/"<<yil<<"y" << endl;
    Sleep(1000);
    s++;
    if(s>59){
        s=0;
        m++;
    }
    if(m>59){
        m=0;
        h++;
    }
    if(h>23){
        h=0;
        d++;
    }
    if(d>31){
        d=1;
        oy++;
    }
    if(oy>12){
        oy=1;
        yil++;
    }
        system("cls");
    }
    return 0;
}
