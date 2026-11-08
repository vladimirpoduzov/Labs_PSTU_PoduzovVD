#include <iostream>
#include <locale>
using namespace std;
int main(){
    setlocale(LC_ALL, ".65001");
    int n,k;
    cout << "Размер массива: ";
    cin >> n;
    int* l = new int[n+2];
    cout << "Введите массив: ";
    for(int i= 0; i < n; i++)
        cin >> l[i];
    cout << "C какого элемента начать печатать: ";
    cin >> k;
    k-=1;
    for(int i=k; i <(n+k); i++){
        cout << l[i%n] << " ";
    }
    cout << endl;
    int lf = l[0];
    int ll = l[n-1];
    l[n] = lf;
    l[n+1] = ll;
    n+=2;
    for(int i= 0; i < n; i++)
        cout << l[i] << " ";
    cout << endl;
    int m =0;
    for(int i=0; i<n; i++)
        if(l[i]%2!=0)
            l[m++] = l[i];
    n=m;
    for(int i=0; i<n; i++)
        cout << l[i] << " ";
    cout << endl;
    for(int i=k; i <(n+k); i++)
        cout << l[i%n] << " ";
    cout << endl;
    return 0;
}

