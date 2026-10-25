/*
Задача вариант 18: Найти сумму ряда с точностью e=10^-4, общий член которого a = n^3/(3n-3)!
*/
#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,".65001");
    int n;
    double a,b,sum;
    double e = pow(10,-4);
    n = 10;
    sum = 1;
    a = 1; // a от первого
    for(int i=2; i<=n;++i){
        b = a*(pow(i,3)/(3*pow(i-1,4)*(3*i-4)*(3*i-5))); // рекурретная формула
        if ((b*i)>=e){
            sum+= b;
        }
        a = b;
    }
    cout << "Сумма ряда с точность e=10^-4 равна: " << sum << endl;
    return 0;
}
