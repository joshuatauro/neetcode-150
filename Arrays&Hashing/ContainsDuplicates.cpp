#include <bits/stdc++.h>
using namespace std;

bool isDuplicates(vector<int> &v1){
    sort(v1.begin(), v1.end());
    for(auto itr=v1.begin(); itr != v1.end(); itr++){
        if(*itr == *(itr+1)){
            return false;
        }
    }
    return true;
}


int main() {

    vector<int> v1;
    v1.push_back(5);
    v1.push_back(1);
    v1.push_back(3);
    // v1.push_back(5);

    if(!isDuplicates(v1)){
        cout << "The vector contains duplicates";
    }else{
        cout << "The vector dosent contain duplicates";
    }
}