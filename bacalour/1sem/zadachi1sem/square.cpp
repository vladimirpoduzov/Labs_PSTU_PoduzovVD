#include <iostream>
#include <locale>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n<=2){
        if(n==1){
            cout << "*";
        }
        else{
            cout << "**" << endl;
            cout << "**";
        }
    }
    else {
        for(int i=1; i<=n;++i){
            cout << "*";
        }
        cout << endl;
        for(int i=1; i<= (n-2); ++i){
            cout << "*";
            for(int j=1; j<=(n-2);++j){
                cout << " ";
            }
            cout << "*" << endl;
        }
        for(int i=1; i<=n;++i){
            cout << "*";
        }
    }
    return 0;
}