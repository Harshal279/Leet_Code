#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> arr = {2,3,1,1,4};
    vector <int> result(arr.size(),0);
    int i = 0;
    result[0] = 1;
    while (i < result.size()){
        if (result[i] == 1){
            for ( int j = i+1; j <= arr[i] + i  && arr.size(); j++){
                if ( result[j] == 0){
                    result[j] = 1;
                }
            }
        }
        i++;
    }
    if (result[result.size() -1] == 1){
        cout << "true";
    }
    else{
        cout << "false";
    }
}