#include <iostream>
using namespace std;

int main()
{
    string data;
    cin >> data;

    int length, one = 0, two = 0, three = 0, count;
    length = data.length();
    count = length / 2;

    for (int i = 0; i < length; i++)
    {
        if (data[i] == '1')
            one++;
        else if (data[i] == '2')
            two++;
        else if (data[i] == '3')
            three++;
    }
    cout << one << two << three << endl;
    for (int i = 1; i <= length; i++)
    {
        if (i % 2 == 0)
            cout << '+';
        else
        {
            if (one != 0)
            {
                cout << 1;
                one--;
            }
            else if (two != 0)
            {
                cout << 2;
                two--;
            }
            else if (three != 0)
            {
                cout << 3;
                three--;
            }
        }
    }
}