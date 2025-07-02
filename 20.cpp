#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
    string que = "(){}[]";
    stack <int> temp;
    bool result = false;
    for(int i= 0; i<que.length(); i++){
        if(que[i] == '(' || '{' || '['){
            temp.push(que[i]);
        }
    }
    for(int i= 0; i<que.length(); i++){
        if(que[i] == '(' &&  ){
            temp.push(que[i]);
        }
    }
    
}