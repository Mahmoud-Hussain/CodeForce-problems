#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){
    string word;
    cin>>word;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    for(int i=0;i<word.length();i++){
        if(word[i]!='a'&&
        word[i]!='i'&&
        word[i]!='o'&&
        word[i]!='u'&&
        word[i]!='e'&&
        word[i]!='y'){
            cout<<"."<<word[i];
        }
    }
}