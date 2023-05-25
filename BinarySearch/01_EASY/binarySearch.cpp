#include<bits/stdc++>

bool binarySearch(vector<int> &nums, int target){
    int s=0;
    int l=nums.size()-1;
    while(s<=l){
        mid = (s+l)/2;
        if(arr[mid] == target) return true;
        else if(arr[mid] > target) {
            s=mid+1;
        }else{
            l=mid-1;
        }
    }
    return false;
}