#include <iostream>
using namespace std;
int main(){
    int amount_word;
    cin >> amount_word;
    string word[amount_word];
    for (int i = 0; i < amount_word; i++){
        cin >> word[i];}
    for (int i = 0; i < amount_word; i++){
        int temp = word[i].length();
        if (temp > 10){
            cout << (word[i])[0] << temp - 2 << (word[i])[temp - 1] << endl;}
        else{
            cout << word[i] << endl;}}
    return 0;
}