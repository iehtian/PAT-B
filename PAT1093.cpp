#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
#include <sstream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    vector<char> vec;
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    string s = s1 + s2;
    for (int i = 0; i < s.length(); i++)
    {
        vector<char>::iterator itvec = find(vec.begin(), vec.end(), s[i]);
        if (itvec!=vec.end())
        {
            continue;
        }
        else{
            vec.push_back(s[i]);
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        printf("%c", vec[i]);
    }
    
}