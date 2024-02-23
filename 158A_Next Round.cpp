#include <iostream>
using namespace std;

int main()
{
    int k, n, A[50], count = 0;

    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < n; i++){
        if (A[i] >= A[k - 1] && A[i] > 0)
        {
            count++;
        }
    }
    cout << count << endl;
}