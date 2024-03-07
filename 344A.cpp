#include<iostream>
using namespace std;

int main(){
    int n,x,y=0,count=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x!=y && y!=0){
            count++;
            y=x;
        }
        else if(y==0){
            y=x;
        }
    }
    cout<<count;
    return 0;
}