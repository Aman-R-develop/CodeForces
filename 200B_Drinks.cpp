#include <iostream>
using namespace std;

int main()
{
    float n;
    int sum = 0;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double ans = sum /n;
    printf("%.4f",ans);
    return 0;
}