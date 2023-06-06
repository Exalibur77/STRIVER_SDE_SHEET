#include<bits/stdc++.h>
using namespace std;


void nextPermutation(vector<int>& arr) {
        
    int N = arr.size();
    if(arr.size() == 1) return;

    //    indx1
    // 1    2    5 4 3 
        
    // Search for the number whose previous number is smaller than it and save it
    int ind1=-1;
    for(int i=N-1;i>=1;i--)
    {
        if(arr[i]>arr[i-1])
        {
            ind1=i-1;
            break;
        }
    }
        
    // if no such number found means array is already desc sorted
    if(ind1==-1)
    {
        reverse(arr.begin(),arr.end());
        return;
    }

    //                indx2(first greater from last than arr[ind1])
    // 1    2    5 4   3 

    
        
    // finding the first max than arr[ind1] from last and swap them ie making largeer ele to left and smaller to right
    int ind2=-1;
    for(int i=N-1;i>=0;i--)
    {
        if(arr[i]>arr[ind1])
        {
            ind2=i;
            break;
        }
    }

    swap(arr[ind1],arr[ind2]);
        
    // sort the elemnts after indx1
    sort(arr.begin()+ind1+1,arr.end());
        
        
}

int main(){




}