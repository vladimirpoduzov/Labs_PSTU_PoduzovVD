#include <iostream>
#include <locale>
#include <string>
using namespace std;
int main(){
    setlocale(LC_ALL,".65001");
    cout << "Введите строку: ";
    string s;
    getline(cin,s);
    string word[128];
    int v =0,k =0,n =s.size();
    while(k < n){
        while(s[k]==' '){
            k++;
        }
        if(k < n){
            string w = "";
            while (s[k]!=' '){
                w+=s[k];
                k++;
            }
            word[v] = w;
            v++;
        }
    }
    bool p[128];
    for(int i=0;i<v;i++){
        char c=word[i][0];
        p[i] =(c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z');
    }
    int x[128],po[128],y = 0;
    for(int i=0;i<v;i++) {
        if(p[i]){
            x[y] = i;
            y++;
        }
    }
    for(int a=0;a<y-1;a++){
        for(int b=0;b<y-a-1;b++){
            if(word[x[b]] > word[x[b+1]]){
                int d = x[b];
                x[b] = x[b+1];
                x[b+1] = d;
            }
        }
    }
    for(int i=0; i<y; i++){
        po[i] = x[i];
    }
    for(int a=0;a<y-1;a++){
        for(int b=a+1;b<y;b++){
            if(po[b] < po[a]){
                int d = po[a];
                po[a] = po[b];
                po[b] = d;
            }
        }
    }
    string re[128];
    for(int i =0;i<v;i++){
        re[i] = word[i];
    }
    for(int i =0;i<y;i++){
        re[po[i]] = word[x[i]];
    }
    cout << "Итого: ";
    for(int i =0;i<v;i++){
        if(i>0){
            cout << ' ';
        }
        cout << re[i];
    }
    cout << endl;
    return 0;
}
