#include<iostream>
#include<vector>
using namespace std;
int main() {
    string s = "Hello World     " ;
    cout << sizeof(s)<< endl;
    int size = s.length() ;
    int last = s.length() -1;
    int count = 0 ;
    while (last >= 0 && s[last] == ' ') {
        last--;
    }
    for (int i =last ; i >= 0  ; i--){
        if (s[i] != ' '){
            count ++;
        }
        else {
            break;
        }
    }
    cout << count;
}