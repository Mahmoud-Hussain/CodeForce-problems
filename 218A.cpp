#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string word;
    cin>>word;

    for(int i=0;i<word.length();i++){
        if(i==0){
            cout<<char(toupper(word[i]));
        }
        else cout<<word[i];
    }

}