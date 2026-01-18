#include <iostream>
#include <set>
using namespace std;

int main(){
    string s;
    char ans = 'A';
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] > ans){
            count = 0;
            ans = s[i];
            count++;
        }else if(s[i] == ans){
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << ans;
    }
    
    
    return 0;
}