#include<iostream>
#include<string>

using namespace std;
int main()
{
 string s= "hi iam harshal" ;
 string part= "harshal" ;
 string ans= "" ;

 for (int i =0 ; i<s.length() ; i++ ){
    for (int j =0 ; j<part.length(); j++ ){
        if (s[i] != part[j]){
            ans.push_back(i);
        }
        cout << ans;
    }
 }

}