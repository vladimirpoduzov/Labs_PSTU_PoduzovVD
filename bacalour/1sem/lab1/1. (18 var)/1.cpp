#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL,".65001"); //. подключение кириллицы
    float a = 1000.0;
    float b = 0.0001; /*
    значения переменных записаны в типе данных float*/
    float c = pow((a-b),3);
    float d = pow(a,3);
    float e = pow(b,3);
    float f = 3*a*(pow(b,2));
    float g = 3*(pow(a,2))*b; //. выражения при float
    cout << (c - (d-g))/(e-f) << endl;
    cout << "Значение выражения при float: " << ((c-d)/(e-f-g)) << endl; //. вывод значения при float

    double a1 = 1000.0;
    double b1 = 0.0001; /*
    значения переменных записаны в типе данных double*/
    double c1 = pow((a1-b1),3);
    double d1 = pow(a1,3);
    double e1 = pow(b1,3);
    double f1 = 3*a*(pow(b1,2));
    double g1 = 3*(pow(a1,2))*b1; //. выражения при double
    cout << (c1 - (d1-g1))/(e1-f1) << endl; 
    cout << "Значение выражения при double: " << ((c1-d1)/(e1-f1-g1)) << endl; //. вывод значения при double

    /*
    Так как у float и double разная точность представления чисел (float 32‑битный тип, обеспечивает 6–9 значащих десятичных цифр, а double 64‑битный тип, обеспечивает 15–17 значащих десятичных цифр).
    Когда число требует больше цифр, чем может вместить тип, часть информации может теряться при округлении.
    */

    return 0;
}
