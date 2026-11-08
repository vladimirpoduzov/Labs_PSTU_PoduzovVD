#include <iostream>
#include <locale>
#include <string>
using namespace std;
int mx(int l[], int n){
    int maxim = l[0];
    for(int i=1;i<n;++i)
        if(l[i] > maxim)
            maxim = l[i];
    return maxim;
}
float mx(float l[], int n){
    float maxim = l[0];
    for(int i=1;i<n;++i)
        if(l[i] > maxim)
            maxim = l[i];
    return maxim;
}
double mx(double l[], int n){
    double maxim = l[0];
    for(int i=1;i<n;++i)
        if(l[i] > maxim)
            maxim = l[i];
    return maxim;
}
int mxlen(string s){
    int mxlen=0,len=0;
    for(int i=0;i<s.length();++i){
        if(s[i] == ' '){
            if(len>mxlen)
                mxlen=len;
            len=0;
        }
        else
            len+=1;
    }
    if(len>mxlen)
        mxlen=len;
    return mxlen;
}
int main(){
    setlocale(LC_ALL, ".65001");
    int x[] = {10,2,-4,12,5,3};
    float y[] = {2.54,2.12,0.23,5.3};
    double z[] = {3.3334,3.234,5.97,2.002};
    cout << "Максимальный элемент массива типа int: " << mx(x,6) << endl;
    cout << "Максимальный элемент массива типа float: " << mx(x,4) << endl;
    cout << "Максимальный элемент массива типа double: " << mx(x,4) << endl;
    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    cout << "Длина самого длинного слова: " << mxlen(s) << endl;
    return 0;
}
