# include <iostream>
# include <vector>
using namespace std ;
int main (){
    vector<int> nums = {1,0,3,0,5,0};
    int size = nums.size();
    int i = 0 ;
    for (int j = 0 ; j<size ; j++){
        if (nums[j] != 0 ){
            swap(nums[i],nums[j]) ;
            i++;
        }    
    }
    for (int i =0 ; i<size ; i++){
        cout << nums[i]; 
    }
}
