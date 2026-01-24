#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int row = 0;
    int count = 0;
    int col_1 = 0;
    int col_2 = 0;
    char arr[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '*')
            {
                count++;
            }
        }
        if (count == 2)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '*')
                {
                    if (col_1 == 0)
                    {
                        col_1 = j+1;
                    }else{
                        col_2 = j+1;
                    }
                    
                }
            }
        }
        if (count == 1)
        {
            row = i + 1;
        }
    }
    if (arr[row - 1][col_1 - 1] != '*')
    {
        cout << row << " " << col_1;
    }else if (arr[row - 1][col_2 - 1] != '*')
    {
        cout << row << " " << col_2;
    }
    
    
    
    return 0;
}