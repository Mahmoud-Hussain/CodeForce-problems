#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string word;
    int a=0,d=0,n;
    cin>>n;
    cin>>word;

    for(int i=0; i<word.length();i++){
        if(word[i]=='A') a++;
        else d++;
    }
    if (a>d)
    {
        cout<<"Anton";
    }
    else if (a<d)
    {
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }

    
}
