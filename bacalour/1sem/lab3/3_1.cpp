#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
int main(){
    setlocale(LC_ALL,".65001");
    double a=0.1,b=0.8,e=0.0001,sn,se,y;
    double z = (b-a)/10, x=a, p = atan(1)*4;
    sn = se = (cos(2*x))/3;
    for(x;x<=0.81;x+=z){
        for(int n=2;n<=50;++n){
            sn += (cos(2*n*x))/(4*n*n-1);
            if(((se*x)/n)>=e){
                se += (cos(2*n*x))/(4*n*n-1);
            }
        }
        y = 0.5 - (p/4)*abs(sin(x));
        cout << "X=" << x << "  " << "SN=" << sn << "  " << "SE=" << se << "  " << "Y=" << y << endl;
    }
    return 0;
}