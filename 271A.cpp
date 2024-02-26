#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x;
    y=x+1;
    while(true){
        int a = y/1000;
        int b = y/100 % 10;
        int c = y/10 % 10;
        int d = y % 10;
        if( a!=b && 
            a!=c &&
            a!=d &&
            b!=c &&
            b!=d &&
            c!= d)
        {
            break;
        }
        else{
            y++;
        }
    }
    cout<<y;
}