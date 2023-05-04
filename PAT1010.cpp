#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v,ve;
    int k;
    while (cin>>k)
    {
        v.push_back(k);
        if(cin.get()=='\n') break;
    }
    int n = v.size();
    for (int i = 0; i < n; i=i+2)
    {
        if(v[i+1]==0) {
            v[i] = 0;
            ve.push_back(v[i]);
            ve.push_back(v[i + 1]);
            continue;
        }
        v[i] = v[i] * (v[i + 1]);
        v[i + 1]--;
        ve.push_back(v[i]);
        ve.push_back(v[i + 1]);
    }
    cout <<  ve[0]<< ' ' << ve[1];
    for (int i = 2; i < ve.size(); i=i+2)
    {
        if (ve[i] != 0||ve[i+1]!=0)
        {
            cout << ' ' << ve[i] << ' ' << ve[i+1];
        }
    }
    
}