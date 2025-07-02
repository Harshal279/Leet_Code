# include <iostream>
# include <string>
# include <vector>
using namespace std ; 
int main(){
    vector<char> s = {'h','i',' ','i','a','m',' ','H','G'};
    int i = 0 ;
    int j = s.size()-1 ;
    while (i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    for (char n : s){
        cout << n;
    }
    // for (int i = 0 ; i<s.size(); i++){

    // }
}
