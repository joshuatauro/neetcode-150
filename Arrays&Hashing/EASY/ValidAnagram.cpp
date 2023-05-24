#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1,string s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2) return true;
    return false;
}

int main(){
    string s1 = "joshua", s2="joshaud";

    if(isAnagram(s1,s2)){
        cout << "The two strings are anagrams";
    }else{
        cout << "The two strings are not anagrams";
    }
}