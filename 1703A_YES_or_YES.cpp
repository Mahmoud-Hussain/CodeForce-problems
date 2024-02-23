#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
        transform(A[i].begin(), A[i].end(), A[i].begin(), ::tolower);
    }
    

    
    for(int i=0; i<n;i++){
       if(A[i]=="yes"){
        cout<<"YES"<<endl;
        cout<<"YES"<<endl;
        }
       else{
        cout<<"NO"<<endl;
       }
    }
    

}