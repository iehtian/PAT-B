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
    string s;
    cin >> s;
    long long res = 0;
    int tnum = count(s.begin(), s.end(), 'T');
    int pnum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='P')
            pnum++;
        else if(s[i]=='T')
            tnum--;
        else
            res = (res + pnum * tnum) % 1000000007;
    }
    cout << res;
}