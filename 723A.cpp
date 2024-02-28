#include<iostream>
using namespace std;
int main(){
    int x,y,z,mid,sum=0;
    cin>>x>>y>>z;
    
    if(x>y && x>z){
        if(y>z){
            sum=(x-y)+(y-z);
        }
        else if(y<z){
            sum=(x-z)+(z-y);
        }
    }
    else if(y>x && y>z){
        if(x>z){
            sum=(y-x)+(x-z);
        }
        else if(x<z){
            sum=(y-z)+(z-x);
        }
    }
    else if(z>x && z>y){
        if(x>y){
            sum=(z-x)+(x-y);
        }
        else if(x<y){
            sum=(z-y)+(y-x);
        }
    }
    cout<<sum;
}