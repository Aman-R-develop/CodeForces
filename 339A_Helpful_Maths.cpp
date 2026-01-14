#include <iostream>
using namespace std;
 
int main()
{
    string s;
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i += 2)
    {
        if (s[i] == '1')
        {
            count_1++;
        }
        if (s[i] == '2')
        {
            count_2++;
        }
        if (s[i] == '3')
        {
            count_3++;
        }
    }
    while (count_1 != 0)
    {
        cout<<'1';
        if(count_1==1 && count_2==0 && count_3==0)break;
        cout<<'+';
        count_1--;
    }
    while (count_2 != 0)
    {
        cout<<'2';
        if(count_2==1 && count_1==0 && count_3==0)break;
        cout<<'+';
        count_2--;
    }
    while (count_3 != 0)
    {
        cout<<'3';
        if(count_3==1 && count_2 ==0 && count_1 ==0)break;
        cout<<'+';
        count_3--;
    }
    return 0;
}