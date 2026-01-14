#include <iostream>
#include <string>
using namespace std;
int arr[125];
int main()
{
    string s;
    cin >> s;
    int count = 0;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        arr[s[i]]++;
        if (arr[s[i]] == 1)
            count++;
    }
    if (count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
