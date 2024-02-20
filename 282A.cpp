#include <iostream>
using namespace std;

int main(){

    int n,x=0;
    cin>>n;
    string f;

    for(int i=0; i<n; i++){
        cin>>f;
        if(f=="++X" || f=="X++"){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;
}