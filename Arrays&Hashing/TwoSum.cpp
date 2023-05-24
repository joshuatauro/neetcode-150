#include<bits/stdc++.h>
using namespace std;

int* twoSum(vector<int> v1, int target){
    map<int, int> m1;
    for(auto itr = v1.begin();itr!=v1.end();itr++){
        int diff = target-*itr;
        if(m1.find(diff) == m1.end()){
            m1[v1[i]]=1;
        }else{
            return {m1[diff], i};
        }
    }
    return{-1,-1};
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int target=5;
    twoSum(arr, target);
    return 0;
}
