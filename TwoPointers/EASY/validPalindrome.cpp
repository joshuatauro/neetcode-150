#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    char* sp=&s[0];
    char* ep=&s[s.length()-1];
    while(sp<ep){
        if(!isalnum(*sp)){
            sp++;
        }else if(!isalnum(*ep)){
            ep--;
        }else if(tolower(*sp) != tolower(*ep)) return false;
        else{
            sp++;
            ep--;
        }
    }
    return true;
}

int main(){
    string s = "race   car";
    if(isPalindrome(s)){
        cout << "It is palindrome";
    }else{
        cout << "It is not palindrome";
    }
}