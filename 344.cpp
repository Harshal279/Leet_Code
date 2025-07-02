# include <iostream>
# include <vector>
#include <algorithm> 
using namespace std ; 
int main () {
    vector<char> name = {'h','a','r','r'};
    
    int start = 0;
    int end = name.size() -1 ;

    while(start < end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
    for (char num : name){
        cout << num;
    }

}