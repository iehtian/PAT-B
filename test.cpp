#include<iomanip>
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> mp;
    mp["A"]++;
    mp["B"] = 1;
    mp["B"]++;
}