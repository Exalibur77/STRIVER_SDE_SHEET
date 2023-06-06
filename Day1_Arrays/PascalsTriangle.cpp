#include<bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
      
    vector < vector < long long int > > ans;
    
    // Total number of rows 
    for(int i=1 ; i<=n ; i++){
        
        long long coeff = 1;
        
        vector < long long int > temp;
        
        // no of elements in each row is equal to its row number.
        for(int k=1 ; k<=i ; k++){
            
            temp.push_back(coeff);
            
            coeff = 1ll*coeff*(i-k)/k;
            
        }
        
        ans.push_back(temp);
        
        
    }
    
    
    
    return ans;
    
    
    
}




int main(){

    vector<vector <long long>> arr = printPascal(10);

    for(auto &v : arr){
        for(auto &val : v){
            cout << val << " ";
        }cout << endl;
    }



    return 0;
}