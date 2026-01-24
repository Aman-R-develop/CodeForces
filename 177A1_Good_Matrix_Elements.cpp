#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int arr[101][101];
    int n;
    int row = 0;
    int col = 0;
    cin >> n;\
    int mid_rc = (n - 1) / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[mid_rc][i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][mid_rc];
    }
    while (row!=n)
    {
        sum+=arr[row][col];
        row++;
        col++;
    }
    
    int r = 0;
    int c = n-1;
    while (r!=n)
    {
        sum+=arr[r][c];
        r++;
        c--;
    }
       
    
    cout << sum - ((arr[mid_rc][mid_rc])*3);
    return 0;
}