#include<iostream>
using namespace std;

int main(){
    int n,x,y=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x!=y && y!=0){
            count++;
            y=x;
            // cout<<"if"<<endl;
        }
        else if(y==0){
            y=x;
            // cout<<"else if"<<endl;
        }
    }
    count++;
    cout<<count;
    return 0;


}