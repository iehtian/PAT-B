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
    int n, m, s;
    scanf("%d%d%d", &n, &m, &s);
    string s1[n];
    map<string, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s1[i];
        mp[s1[i]] = 0;
    }
    // printf("\n");
    for (int i = s-1; i < n; i=i+m)
    {
        if (mp[s1[i]]==0)
        {
            mp[s1[i]] = 1;
            cout << s1[i] << endl;
        }
        else{
            while (mp[s1[i]]!=0)
            {
                i++;
            }
            mp[s1[i]] = 1;
            cout << s1[i] << endl;
        }
        count++;
    }
    if (count==0)
    {
        printf("Keep going...");
    }
    
}