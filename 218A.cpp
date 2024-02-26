#include<iostream>
using namespace std;

int main(){
    string word;
    cin>>word;

    for(int i=0;i<word.length();i++){
        if(i==0){
            cout<<char(word[i]-'0');
        }
        else cout<<word[i];
    }

}