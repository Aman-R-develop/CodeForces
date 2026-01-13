#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    vector<string> word = {};
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        int len = str.length();
        if (len > 10)
        {
            string first = str.substr(0, 1);
            string last = str.substr(str.length() - 1, 1);
            string new_word = first + to_string(len - 2) + last;
            word.push_back(new_word);
        }else{
            word.push_back(str);
        }
    }
    for (const auto& str : word) {
        cout << str << endl;
    }

    return 0;
}