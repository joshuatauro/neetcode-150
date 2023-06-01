#include<bits/stdc++.h>
using namespace std;

// brute force solution
//! will TLE

bool isAnagram(string s1, string s2){
       sort(s2.begin(), s2.end());
        sort(s1.begin(), s1.end());
        return s1==s2;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        for (int i=0; i<strs.size(); i++) {
            vector<string> subS;
            subS.push_back(strs[i]);
            for(int j=i+1;j<strs.size();j++){
                if(isAnagram(strs[j], strs[i])){
                    subS.push_back(strs[j]);
                    strs.erase(strs.begin()+j);
                    j--;
                }
            }
            res.push_back(subS);
        }
    return res;
    }


// OPTIMIZED SOLUTION - HASHMAPS

//* Traverse the array and for each word find the freq of the alphabets, and store it in an array and use this array as a key in the hashmap, and hence for each word, create the array and append the word to the value at the key

 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> m1;
        vector<vector<string>> res;
        for (int i=0;i<strs.size();i++){
            vector<int> count(26,0);
            for(auto j=0;j<strs[i].size();j++){
                count[strs[i][j] - 'a']++;
            }
            m1[count].push_back(strs[i]);
        }
        for(auto j : m1){
            res.push_back(j.second);
        }
        return res;
    }

int main() {

    return 0;
}