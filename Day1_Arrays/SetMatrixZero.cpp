#include<bits/stdc++.h>
using namespace std;

// Time Complexity - O(n*m)
// Space Complexity - o(n+m)
void setZeros(vector<vector<int>> &matrix)
{
    
    int n = matrix.size();
    int m = matrix[0].size();
    
    vector <bool> top(m,0);
    vector <bool> left(n,0);
    
    for(int i=0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            
            if(matrix[i][j] == 0){
                left[i] = 1;
                top[j] = 1;
            }
            
        }
    }
    
    for(int i=0 ; i<top.size() ; i++){
        if(top[i] == 1){ // means ye wala column 0 kar du pura
        
            for(int j=0 ; j<n ; j++){
                matrix[j][i] = 0;
            }
        }
        
    }
    
    for(int i=0 ; i<left.size() ;i++){
        // means ye wali row puri 0 kar do
        if(left[i] == 1){
           
            for(int j=0 ; j<m ; j++){
                matrix[i][j] = 0;
            }
            
        }
    }
    
    
}

// Here instead of extra vector we used the first row and firts column of the matrix to store the position of the whole matrix

// Time Complexity - O(n*m)
// Space Complexity - o(1)

void setZeros1(vector<vector<int>> &matrix)
{
    
    
    
    int n = matrix.size();
    int m = matrix[0].size();
    
    bool isZeroRow = false;
    bool isZeroCol = false;
    
    // checking first row for zero
    for(int i=0 ; i<m ; i++){
        if(matrix[0][i] == 0){
            isZeroRow = 1;
            break;
        }
    }
    
    // checking first column zero
    for(int i=0 ; i<n ; i++){
        if(matrix[i][0] == 0){
            isZeroCol = 1;
            break;
        }
    }
    
    // starting from 1,1 and marking out zero at first row and column if any zero present.
    
    for(int i=1 ; i<n ; i++){
        for(int j = 1 ; j<m ; j++){
            
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
            
        }
    }
    
    // marking out zero in matrix if 0th row of each column is zero anf if 0th column of each row is zero 
    
    for(int i=1 ; i<n ; i++){
        for(int j=1 ; j<m ; j++){
            
            if(matrix[i][0] == 0 or matrix[0][j] == 0){
                matrix[i][j] =0 ;
            }
            
        }
        
    }
    
    // making the first row and first column values
    
    // means first row contains zero .. then make all as zero
    if(isZeroRow){
        for(int i=0 ; i<m ; i++){
            matrix[0][i] = 0;
        }
    }
       
    // means first column is zero
    if(isZeroCol){
        for(int i=0 ; i<n ; i++){
            matrix[i][0] = 0;
        }
    }
    
}




int main(){

    vector < vector <int> > matrix{
        {1,3,4,5,9},
        {0,4,6,2,0},
        {12,4,6,2,0},
        {1,1,1,1,1}
    };

    setZeros(matrix);

    for(auto &v : matrix){
        for(auto &val : v){
            cout << val << " ";
        }cout << endl;
    }



}