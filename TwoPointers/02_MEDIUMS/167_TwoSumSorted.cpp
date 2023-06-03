#include<bits/stdc++.h>
using namespace std;

// brute force solution
//! will give TLE

vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                int sum = numbers[i]+numbers[j] ;
                if(sum == target){
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }else if(sum > target){
                    break;
                }
            }
        }
        return res;
    }

// OPTMISED - TWO POINTERS
//* have two pointers, one at the start and the other at the end, since the array is sorted, find the sum of the values at the start and end index, if the sum is higher than the target, we can simply just reduce the last index, and if the sum is lower than the target, we can increase the value of the start index

// tc - O(n)
vector<int> twoSum(vector<int>& numbers, int target) {
    int s=0;   
    int l=numbers.size()-1;

    while(s<=l){
        int sum = numbers[s]+numbers[l];
        if(sum==target){
            return { s+1, l+1 };
        }else if(sum > target){
            l--;
        }else{
            s++;
        }
    }
    return { 0,0 };
}
