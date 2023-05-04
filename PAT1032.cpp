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
    int n;
    map<int,int> mp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        map<int, int>::iterator it = mp.find(x);
        if (it==mp.end())
        {
            mp[x] = y;
        }else{
            mp[x] = mp[x] + y;
        }
    }
    int res1 = 0, res2 = 0;
    for (map<int, int>::iterator it = mp.begin(); it!=mp.end(); it++)
    {
        if (it->second>=res2)
        {
            res1 = it->first;
            res2 = it->second;
        }
    }
    printf("%d %d", res1, res2);
}