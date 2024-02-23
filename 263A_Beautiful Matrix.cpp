#include <iostream>
using namespace std;
int main(){

    int Array[5][5],r,c,count=0;

    for(int i=0 ; i<5 ; i++){
        for(int k=0; k<5 ; k++){
            cin>>Array[i][k];
        }
    }
    for(int i=0 ; i<5 ; i++){
        for(int k=0; k<5 ; k++){
            cout<<Array[i][k];
        }
        cout<<endl;
    }
    for(int i=0 ; i<5 ; i++){
        for(int k=0; k<5 ; k++){
         if(Array[i][k]==1){
            r=i;
            c=k;
         }   
        }
    }
    r++;
    c++;
    cout<<"\n"<<r<<" "<<c;
    if(r>3){
        for(int i=1; r>3 ; i++){
            r=r-1;
            count++;
            cout<<r<<"\n\nfirst"<<count;
        }
    }
    else if(r<3){
        for(int i=1; r<3 ; i++){
            r=r+1;
            count++;
            cout<<r<<"\n\nsecond"<<count;
        }
    }
    if(c>3){
        for(int i=1; c>3 ; i++){
            c=c-1;
            count++;
            cout<<c<<"\n\nthird"<<count;
        }
    }
    else if(c<3){
        for(int i=1; c<3 ; i++){
            c=c+1;
            count++;
            cout<<c<<"\n\nfourth"<<count;
        }
    }
    
    cout<<"\n\n\n\n"<<count;
    
}