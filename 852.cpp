# include <iostream>
using namespace std ;
int main (){
    int arr[6]={1,2,3,4,3,2};
    int start = 0;
    int end = 6-1 ;
    int mid = (start - end )/2;

    while (start < end){
        if (arr[mid]<arr[mid + 1]){
            start = mid + 1;
        }
        else {
            end = mid ; 
        }
    }

}
