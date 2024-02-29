#include<iostream>
using namespace std;
int main(){
    int n,sum=0,a,b,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>a>>b;
        sum=sum+b-a;
        if(sum>=max) max=sum;
    }
    cout<<max;
}