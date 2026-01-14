#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int count = 0;
    if(1<=m && m<=n && n<=16){
        if (m==n==1)
        {
            count = 0;
        }
        
        if(n>=2){
            count+=(m*n)/2;
        }
    }
    cout<<count;
    return 0;
}