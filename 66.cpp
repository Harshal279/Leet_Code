#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> result ;
    int arr [] = {1,2,9};
    int size = sizeof(arr) /sizeof(arr[0]);
    int end = size-1 ;
    // result.push_back(arr[end]+1 );
    for (int i = end-1; i>= 0 ; i--){
        if (arr[i] < 9){
            
        }
        // result.insert(result.begin(), arr[i]) ;
    }
    for (int i : result){
        cout << i << endl;    }
}