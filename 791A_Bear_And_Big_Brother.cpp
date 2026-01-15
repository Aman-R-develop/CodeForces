#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int year = 0;
    cin >> a >> b;
    int temp_a = a;
    for (; year < 100;year++)
    {
        if (a>b)
        {
            break;
        }
        a*=3;
        b*=2;
    }
    for (int i = 0; i < 100; i++)
    {
        if (a == temp_a)
        {
            cout<<i;
        }
        a/=3;
    }
    
    return 0;
}