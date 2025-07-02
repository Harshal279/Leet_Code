#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int main() {
    vector<string> strs = {"flower","flow","flight"};

    string prefix = strs[0];

    for (int i = 1; i< strs.size(); i++){
        while(strs[i].find(prefix) != 0){
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) cout << "no similer";
        }
        
    }
}