#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    int best = 0;
    int worst = 0;
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    best = arr[0];
    worst = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>best)
        {
            count++;
            best = arr[i];
        }
        if (arr[i]<worst)
        {
            count++;
            worst = arr[i];
        }
    }
    cout << count;
    return 0;
}