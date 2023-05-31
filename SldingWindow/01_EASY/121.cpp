#include<bits/stdc++.h>
using namespace std;

//*You are given an array prices where prices[i] is the price of a given stock on the ith day.
//* You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.


// brute force solution
//! TLE prone
// time complexity => O(n^2)
int maxProfit(vector<int>& prices) {
    int maxProfit=0;
    for(auto i=prices.begin(); i!=prices.end(); i++){
        int buyVal=*i;
        for(auto j=i; j!=prices.end(); j++){
            if(*j-*i > maxProfit){
                maxProfit=*j-*i;
            }
        }
    }
    return maxProfit;
}

// Optimized || Sliding Window Technique

//* Have two pointers, left for buy date, and right for sell date, traverse through arr, if at any point buy value is less than sell value, we know its better if we buy it on the sell day instead and search for a better day to sell 

int maxProfit(vector<int>& prices) {
        int start=0, end=1;
        int maxProfitValue=0;
        while(end < prices.size()){
            if(prices[end] < prices[start]){
                start=end;
                end++;
            }
            else if(prices[end]-prices[start] > maxProfitValue){
                maxProfitValue = prices[end]-prices[start];
                end++;
            }else{
                end++;
            }
            
        }
        return maxProfitValue;
    }