#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int h,m,s,d,k,d=0;
    k=d=0;
    while(k==0)
    {
        cout<<"soatni kiriting...=";
        cin>>h;
        cout<<"minutni kiriting...=";
        cin>>m;
        cout<<"sekuntni kiriting...=";
        cin>>s;
        if(h<24 && m<<60 && s<<60){
            k++;
            }
        else
        system("cls");
    }
    while(a==0)
    {
        system("cls");
        cout<<h<<":"<<m<<":"<<s<<endl;
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
        if(h>24){
            h=1;
        }
    }
    return 0;
}
