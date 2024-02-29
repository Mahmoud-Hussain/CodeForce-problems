#include <iostream>
using namespace std;

int main()
{
    int n1, n2,s,ans1=1;
    cin >> n1 >> n2;
    if(n1>n2) s=n2;
    else s=n1;
    
    for (int i = 1; i <=s; i++)
    {
        ans1 = ans1 * i;
    
    }

    cout << ans1;
}
