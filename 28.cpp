#include<iostream>
#include<vector>
using namespace std;
int main() {
    string haystack = "sadbutsad" ;
    string needle = "asd";

    int found = haystack.find(needle);

    cout << found ;
}