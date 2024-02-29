#include <iostream>
using namespace std;

int main()
{
    string t, s;
    int ans = 1;
    cin >> t >> s;
    if (t.length() == s.length())
    {
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] != s[t.length() - i - 1])
            {
                ans = 0;
                break;
            }
        }
    }
    else
        ans = 0;
    if (ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}