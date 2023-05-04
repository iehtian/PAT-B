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
    set<int> st1,st2,st3;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        int tem1,tem2;
        scanf("%d%d", &tem1,&tem2);
        st1.insert(tem1);
        st1.insert(tem2);
        mp[tem1] = tem2;
        mp[tem2] = tem1;
    }
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int tem;
        scanf("%d", &tem);
        st3.insert(tem);
    }
    
    for (set<int>::iterator setit1=st3.begin(); setit1!=st3.end(); setit1++)
    {
        
        set<int>::iterator it = st1.find(*setit1);
        if (it==st1.end())
        {
            st2.insert(*setit1);
            continue;
        }
        map<int, int>::iterator mpit = mp.find(*setit1);
        it = st3.find(mpit->second);
        if (it==st3.end())
        {
            st2.insert(*setit1);
        }
        
    }
    int siz = st2.size();
    int i = 0;
    printf("%d\n", siz);
    for (set<int>::iterator it=st2.begin(); it!=st2.end(); it++,i++)
    {
        if (i<siz-1)
        {
            printf("%05d ", *it);
        }
        else
            printf("%05d", *it);
    }
}