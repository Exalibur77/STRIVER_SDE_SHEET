#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        
        int low = 0 , mid = 0 , high = nums.size()-1;
        
        while(mid <= high){
            
            // means mid ki value low se change kar do
            if(nums[mid] == 0){
                swap(nums[mid],nums[low]);
                low++,mid++;
            }
            
            
            else if(nums[mid] == 2){
                swap(nums[mid],nums[high]);
                high--;
                // here only high is reduced since mid value may ior may not be chnaged to a 0 which inturn to be changed by low.
            }
            
            // if already one
            else{
                mid++;
            }
            
            
        }
        
}

int main(){

    vector <int> nums = {2,0,2,1,1,0};

    sortColors(nums);

    for(auto &val : nums){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}