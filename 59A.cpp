#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string word;
    cin>>word;
    int countl=0,countu=0;

    for(int i=0;i<word.length();i++){
        if(word[i]>=97) countl++;
        else countu++;
    }
    if(countl==countu){
        for(int i=0;i<word.length();i++){
            cout<<char(tolower(word[i]));
        }
    }
    else if(countl>countu){
        for(int i=0;i<word.length();i++){
            cout<<char(tolower(word[i]));
        }
    }
    else if(countl<countu){
        for(int i=0;i<word.length();i++){
            cout<<char(toupper(word[i]));
        }
    }
}
