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
#include<unordered_map>
#include<iomanip>
using namespace std;
int main(){
    unordered_map<string, unordered_map<string, string>> mp;
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        unordered_map<string, unordered_map<string, string>>::iterator it = mp.find(s1);
        if (it!=mp.end())
        {
            it->second.insert(make_pair(s2, s2));
        }
        else{
            unordered_map<string, string> mp1;
            mp1.insert(make_pair(s2, s2));
            mp[s1] = mp1;
        }
        unordered_map<string, unordered_map<string, string>>::iterator it1 = mp.find(s2);
        if (it1!=mp.end())
        {
            it1->second.insert(make_pair(s1, s1));
        }
        else{
            unordered_map<string, string> mp1;
            mp1.insert(make_pair(s1, s1));
            mp[s2] = mp1;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        int k;
        scanf("%d", &k);
        vector<string> vec;
        for (int j = 0; j < k; j++)
        {
            string tem;
            cin >> tem;
            vec.push_back(tem);
        }
         int tag = 0;
        for (int j = 0; j < k; j++)
        {
           
            unordered_map<string, unordered_map<string, string>>::iterator it = mp.find(vec[j]);
            if (it!=mp.end()&&tag==0)
            {
                for (int p = 0; p < k; p++)
                {
                    if (p==j)
                    {
                        continue;
                    }
                    unordered_map<string, string>::iterator itt = it->second.find(vec[p]);
                    if (itt!=it->second.end())
                    {
                        printf("No\n");
                        tag = 1;
                        break;
                    }
                }
            }
        }
        if (tag==0)
        {
            printf("Yes\n");
        }
    }
}