#include <iostream>
using namespace std;

int main()
{
    int n, worst, best,input, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> input;
        if (i == 0){
            worst = input;
            best = input;
        }
        if(i>0 && best<input ){
            count++;
            best=input;
        }
        else if(i>0 && worst>input){
            count++;
            worst=input;
        }

    }
    cout << count;
}