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
    int n;
    scanf("%d", &n);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int tem;
        scanf("%d", &tem);
        int res = abs(tem - i);
        map<int, int>::iterator it = mp.find(res);
        if (it!=mp.end())
        {
            mp[res]++;
        }
        else{
            mp[res] = 1;
        }
    }
    map<int, int>::reverse_iterator it = mp.rbegin();
    for (; it!=mp.rend(); it++)
    {
        if (it->second==1)
        {
            continue;
        }
        printf("%d %d\n", it->first, it->second);
    }
    
}