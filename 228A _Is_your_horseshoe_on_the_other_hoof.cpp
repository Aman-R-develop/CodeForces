#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[4];
    set<int>setNew;
    int distinct = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        setNew.insert(arr[i]);
    }
    auto it = setNew.begin();
    while (it!=setNew.end())
    {
        ++it;
        distinct++;
    }
    cout << 4 - distinct;
    return 0;
}