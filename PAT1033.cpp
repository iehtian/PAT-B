#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    string s1, s2;
    // cin >> s1 >> s2;
    getline(cin, s1);
     getline(cin, s2);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    for (int i = 0; i < s2.length(); i++)
    {
       
        if (s1.find(s2[i])!=string::npos)
        {
            continue;
        }
        if(s1.find('+')!=string::npos&&s2[i]>=65&&s2[i]<=90){
            continue;
        }
        if(s1.find(s2[i]+32)!=string::npos)
            continue;
        printf("%c", s2[i]);
    }
    cout << endl;
}