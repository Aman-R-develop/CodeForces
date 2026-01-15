#include <iostream>
using namespace std;

int main()
{
    int x;
    int count = 0;
    cin >> x;
    for (int i = 0; i < 1000000; i++)
    {
        if (x>=5)
        {
            count++;
            x-=5;
        }
        else if (x>=4)
        {
            count++;
            x-=4;
        }
        else if (x>=3)
        {
            count++;
            x-=3;
        }
        else if (x>=2)
        {
            count++;
            x-=2;
        }
        else if (x>=1)
        {
            count++;
            x-=1;
        }
        else if(x==0){
            break;
        }
    }
    cout<<count;
    return 0;
}