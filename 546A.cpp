#include <iostream>
using namespace std;

int main()
{

    int k, n, w, cost = 0, need;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        cost += k * i;
    }
    if (n > cost)
    {
        cout<<0;
    }
    else
    {
        need = cost - n;
        cout << need;
    }
    
}