#include <iostream>
#include <locale>
using namespace std;
int main(){
    int n,s,x;
    s = 2;
    cin >> n;
    for(int i = 2; i <=n; ++i){
        x = 1;
        for(int j = i; j<=2*i;++j){
            x*=j;
        }
        s+=x;
    }
    cout << s << endl;
    return 0;
}