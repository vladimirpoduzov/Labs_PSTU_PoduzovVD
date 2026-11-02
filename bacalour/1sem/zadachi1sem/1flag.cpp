#include <iostream>
#include <locale>
using namespace std;
int main() {
    setlocale(LC_ALL,".65001");
    int a,b;
    bool f = true;
    cin >> a;
    if(a!=0){
        cin >> b;
        while(f&&(b!=0)){
            f=(a<b)&&f;
            if(f){
                a=b;
                cin >> b;
            }
        }
        if(f==false){
            cout << "значения не упорядочены" << endl;
        }
        else{
            cout << "значения упорядочены по возрастанию" << endl;
        }
    }
    else{
        cout << "ошибка ввода";
    }
    return 0;
}