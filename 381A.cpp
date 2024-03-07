#include<iostream>
using namespace std;

int main(){
    int n,ans1=0,ans2=0,k,l=0,p1=1,p2=0;
    
    cin>>n;
    k=n-1;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[l]>=a[k] && p1==1){
           ans1+=a[l];
           l++;
           p1=0;
           p2=1;
        }
        else if(a[l]<=a[k] && p1==1){
           ans1+=a[k];
           k--;
           p1=0;
           p2=1;
        }
        else if(a[l]>=a[k] && p2==1){
           ans2+=a[l];
           l++;
           p2=0;
           p1=1;        
        }
        else if(a[l]<=a[k] && p2==1){
           ans2+=a[k];
           k--;
           p2=0;
           p1=1;
        }
    }
cout<<ans1<<" "<<ans2;
}