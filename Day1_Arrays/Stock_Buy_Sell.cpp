#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
   
    int n = prices.size();
    
    // calculating min till i
    vector <int> buy(n);
    
    int mini = INT_MAX;
    
    for(int i=0 ; i<n ; i++){
        
        mini = min(mini,prices[i]);
        buy[i] = mini;
    }
    
    int ans = INT_MIN;
    
    for(int i=0 ; i<n ; i++){
        // prices - selling price
        // buy - buying price

        ans = max(ans,prices[i]-buy[i]);
    }
    
    return ans;
    
    
}