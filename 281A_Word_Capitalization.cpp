#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int g = s[0];
    if (g>=97){
        g = g-32;
    }
    char a = g;
    s[0] = a;
    cout<<s;
    return 0;
}