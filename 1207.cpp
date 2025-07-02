# include <iostream>
using namespace std ;
void unique(int arr[], int size){
    bool isUnique = false; 
    for (int i = 0 ; i < size ; i++) {
        // cout << arr[i] << "  ";
        for (int j = 0; j < size ; j++ ){
            // cout << arr[j] << endl ;
            // if (arr[i] == arr[j] & ){
            //     isUnique = true ;
            // }

        }
    }
    cout << isUnique << endl ;
}
int main () {
    int arr1 [10] = {1,1,2,3,2,4,1,5,5};
    unique(arr1 , 10) ;
}