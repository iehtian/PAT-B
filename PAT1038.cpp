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
    int n, m;
    scanf("%d", &n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        map<int, int>::iterator it = mp.find(tmp);
        if (it==mp.end())
        {
            mp[tmp] = 1;
        }else{
            mp[tmp]++;
        }
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        map<int, int>::iterator it = mp.find(tmp);
        if (it==mp.end())
        {
            printf("0");
        }else{
            printf("%d", mp[tmp]);
        }
        if(i!=m-1)
            printf(" ");
        }
    
}