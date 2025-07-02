#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
    int l1[] = {2,4,3};
    int l2[] = {5,6,4};
    stack <int> list1;
    stack <int> list2;
    vector <int> result;

    for(int i =  0; i<3; i++){
        list1.push(l1[i]);
        list2.push(l2[i]);
    }
    int carry = 0;
    for(int i = 0; i<3; i++){
        int p = list1.top();
        int q = list2.top();

        list1.pop();
        list2.pop();
        int sum = p + q + carry;
        int digit = sum % 10;
        carry = sum / 10;
        result.push_back(digit);
    }
    for (auto o : result){
        cout << o;
    }



}