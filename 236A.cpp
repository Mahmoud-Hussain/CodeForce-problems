#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<char,int> alphabets;
    string word;
    int count=0; 
    
    for(char c='a';c<= 'z';c++){
        alphabets[c]=0;
    }


    cin>>word;

    for(int i=0 ; i<word.length();i++){
        for(char c='a';c<= 'z';c++){
            if(word[i]==c && alphabets[c]==0){
                count++;
                alphabets[c]=1;
            }    
    }
    }
    cout<<count;
    if(count%2==0){
        cout<<"CHAT WITH HER!";
        
    }
    else{
        cout<<"IGNORE HIM!";
    }

}