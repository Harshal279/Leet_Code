#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int target = 8;
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0 ;
    int end = (row * col) -1 ;
    
        
    while(start<= end){
        int mid = (start + end ) /2 ;
        int element = matrix[mid/col][mid%col]; 

        if (element == target){
            cout << true;                
        }
        if (element < target){
            start = mid +1 ;
        }
        else {
            end =mid-1;
        }
        cout<< false;
    }
        

}