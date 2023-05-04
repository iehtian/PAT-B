#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
	return a.second < b.second;
}
int main(){
    int n, m, tol;
    scanf("%d%d%d", &n, &m, &tol);
    int a[m][n];
    if (n<3||m<3)
    {
        printf("Not Exist");
    }
    for (int i = 0; i < m; i++)
    {
        for (int  j= 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    unordered_map<int, int> mp;
    int resx=0, resy=0, resnum=0;
    for (int i = 1; i < m-1; i++)
    {
        for (int j = 1; j < n-1; j++)
        {
            if (abs(a[i][j]-a[i][j-1])>tol&&abs(a[i][j]-a[i][j+1])>tol&&abs(a[i][j]-a[i+1][j])>tol&&
            abs(a[i][j]-a[i-1][j])>tol&&abs(a[i][j]-a[i+1][j+1])>tol&&abs(a[i][j]-a[i-1][j-1])>tol
            &&abs(a[i][j]-a[i-1][j+1])>tol&&abs(a[i][j]-a[i+1][j-1])>tol)
            {
                unordered_map<int, int>::iterator it = mp.find(a[i][j]);
                if (it==mp.end())
                {
                    mp[a[i][j]] = 1;
                }
                else{
                    it->second++;
                }
            }
        }
    }
    vector< pair<int,int> > vec;
    for(unordered_map<int, int>::iterator it = mp.begin(); it != mp.end(); it++){
        vec.push_back( pair<int,int>(it->first,it->second) );
    }
    sort(vec.begin(),vec.end(),cmp);
    unordered_map<int, int>::iterator it = mp.begin();
    
    if (it==mp.end())
    {
        printf("Not Exist");
        return 0;
    }
    unordered_map<int, int>::iterator it1 = it;
    it1++;
    if(mp.begin()->second>1){
        printf("Not Exist");
    }
    else if(it->second==1&&it1==mp.end()){
        for (int i = 1; i < m-1; i++)
        {
            for (int j = 1; j < n-1; j++)
            {
                if (a[i][j]==it->second)
                {
                    printf("(%d, %d): %d", j+1, i+1, a[i]);
                }
            
            }
        }
    // printf("(%d, %d): %d", resx, resy, resnum);
    }
    else if (it->second==1&&it1->second!=1)
    {
        for (int i = 1; i < m-1; i++)
        {
            for (int j = 1; j < n-1; j++)
            {
                if (a[i][j]==it->second)
                {
                    printf("(%d, %d): %d", j+1, i+1, a[i]);
                }
            
            }
        }
    }
    else if (it->second==1&&it1->second==1)
    {
        printf("Not Unique");
    }
    
}