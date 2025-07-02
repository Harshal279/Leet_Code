#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 5  ;

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0 ;
    
    int i = 0 ;
    while(start<= end){
        int end = marix[i]-1 ;
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