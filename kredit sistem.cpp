#include <iostream>
using namespace std;

int main()
{
    int p,s0,s1,m=0,y=0;
cout <<"bankka qo'yiladigan summani kiriting...="; cin>>s0;
cout <<"bankning foiz stafkasini kiriting...="; cin>>p;
cout <<"oshganda olmoqchi bo'lgan summangizni kiriting...="; cin>>s1;
while (s1>s0)
{
    s0=s0+(p*0.01*s0)/12;
    m++;
}
if(m>12){
    y=m/12;
    m=m%12;
}
        if(y<=0){
            cout<<m<<" oyda" <<"\n"<<s0<<" sum bo'ladi" << endl;
        }
         else
            cout <<y<<" yil-u, "<<m<<" oyda" <<"\n"<<s0<<" sum bo'ladi" << endl;
    return 0;
}
