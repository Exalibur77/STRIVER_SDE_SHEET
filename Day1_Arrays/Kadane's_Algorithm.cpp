#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums) {
        
        int maxi = INT_MIN;
        int n = nums.size();
        
        int curr = 0;
        int start = 0;
        int end;
        
        for(int i=0 ; i<n ; i++){
            
            curr += nums[i];
            
            if(curr > maxi){
                maxi = max(curr,maxi);
                end = i;
            }
            
            
            if(curr < 0){
                curr = 0;
                start = i+1;
            }

        }
        
    cout << start << " " << end << endl;
    return maxi;
        
        
}

int main(){
    
    vector <int> arr{1,-14,4,21,-43,5,32,-11,5};

    int ans = maxSubArray(arr);

    cout << ans << endl;
    return 0;
}