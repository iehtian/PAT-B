#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(),s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(),s2.begin(), ::toupper);
    int n1 = s1.length(),n2 = s2.length();
    int j = 0,m=0;
    string res;
    for (int i = 0; i < n1; i++)
    {
        if(s1[i]==s2[j]){
            j++;
            continue;
        }else{
            int tem = res.find(s1[i]);
            if(tem==-1)
                res = res + s1[i];
        }
    }
    cout << res;
}