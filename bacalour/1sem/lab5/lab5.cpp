#include <iostream>
#include <locale>
using namespace std;
const int mx=100;
void matrix(int a[mx][mx],int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
void stolb(int a[mx][mx],int n,int c1,int c2) {
    for (int i = 0; i < n; i++) {
        int z = a[i][c1];
        a[i][c1] = a[i][c2];
        a[i][c2] =z;
    }
}
void stroc(int a[mx][mx],int n,int r1,int r2) {
    for (int j = 0; j < n; j++) {
        int z = a[r1][j];
        a[r1][j] = a[r2][j];
        a[r2][j] =z;
    }
}
int main() {
    setlocale(LC_ALL,".65001");
    int n;
    cout << "Введите сторону квадрата: ";
    cin >> n;
    int a[mx][mx];
    cout << "Введите матрицу:" << endl;
    for (int i = 0; i <n;i++)
        for (int j = 0; j <n;j++)
            cin >> a[i][j];
    cout << endl << "Исходная матрица:" << endl;
    matrix(a,n);
    for (int i = 0; i < n; i++) {
        int stroccorn = i;
        int stolbcorn = n-i-1;
        int s;
        if (i+1 < n-i)
            s=i+1;
        else
            s = n-i;
        int topstroc=stroccorn-s+1;
        int bottomstroc=stroccorn;
        int leftstolb=stolbcorn;
        int rightstolb=stolbcorn+s-1;
        int mxv=a[topstroc][leftstolb];
        int mxstroc=topstroc;
        int mxstolb=leftstolb;
        for (int b = topstroc; b <= bottomstroc;b++) {
            for (int x = leftstolb; x <= rightstolb;++x) {
                if (a[b][x] >mxv) {
                    mxv= a[b][x];
                    mxstroc = b;
                    mxstolb = x;
                }
            }
        }
        stolb(a,n,mxstolb,rightstolb);
        stroc(a,n,mxstroc,topstroc);
    }
    cout << endl << "Матрица после перестановок:" << endl;
    matrix(a,n);
    bool t=true;
    for (int i = 0; i < n-1; i++) {
        if (a[i][n-i-1] <= a[i+1][n-i-1]) {
            t=false;
            break;
        }
    }
    if (t == true)
        cout << "Убывающая последовательность получилась" << endl;
    else
        cout << "Убывающая последовательность не получилась" << endl;
    return 0;
}
