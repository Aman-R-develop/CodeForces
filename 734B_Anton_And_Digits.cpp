#include <iostream>
using namespace std;

int main()
{
    int n2, n3, n5, n6;
    int sum = 0;
    cin >> n2 >> n3 >> n5 >> n6;
    for (int i = 0; i < 5000000; i++)
    {
        if (n5 == 0 || n6 == 0 || n2==0)
        {
            if (n2 == 0 || n3 == 0)
            {
                break;
            }
            n3--;
            n2--;
            sum+=32;
        }
        else
        {
            sum+=256;
            n2--;
            n5--;
            n6--;
        }
    }
    cout<<sum;
    return 0;
}