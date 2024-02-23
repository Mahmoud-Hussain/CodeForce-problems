#include <iostream>
using namespace std;

int main()
{

    int N, count = 0, check = 0, A[3];

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[j];
        }

        check = A[0] + A[1] + A[2];
        if (check >= 2)
        {
            count++;
        }
    }
    cout<<count;
}