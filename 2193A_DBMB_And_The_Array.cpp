// This is not till checked and needs to checked.

#include <iostream>
using namespace std;

int main()
{
    int rep;
    int n, s, x;
    int sum = 0;
    int arr[10];
    char ans[100000];
    cin >> rep;
    for (int i = 0; i < rep; i++)
    {
        cin >> n >> s >> x;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int k = 0; k < n; k++)
        {
            sum += arr[k];
        }
        if (sum > s)
        {
            ans[i] = 'n';
        }
        if (sum == s)
        {
            ans[i] = 'y';
        }
        if (sum < s)
        {
            while (sum < s)
            {
                sum += x;
                if (sum == s)
                {
                    ans[i] = 'y';
                }else{
                    ans[i] = 'n';
                }
            }
        }
        sum = 0;
    }
    for (int i = 0; i < rep; i++)
    {
        if (ans[i] == 'n')
        {
            cout << "NO" << " ";
        }
        else
        {
            cout << "YES" << " ";
        }
    }
    return 0;
}