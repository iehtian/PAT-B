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
using namespace std;
int main(){
    int yi, er;
    int n, m;
    scanf("%d%d%d%d", &yi, &er, &n, &m);
    unordered_map<int, int> zhiqian,cha;
    int vec[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &vec[i][j]);
        }
    }
    zhiqian.insert(make_pair(yi, yi));
    zhiqian.insert(make_pair(er, er));
    cha.insert(make_pair(abs(yi - er), abs(yi - er)));
    int tag[n] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (tag[j]==1)
            {
                continue;
            }
            unordered_map<int, int>::iterator it = zhiqian.find(vec[j][i]);
            unordered_map<int, int>::iterator itcha = cha.find(vec[j][i]);
            if (it==zhiqian.end()&&itcha!=cha.end())
            {

                for (unordered_map<int, int>::iterator zhi = zhiqian.begin();zhi!=zhiqian.end(); zhi++)
                {
                    cha.insert((make_pair(abs(zhi->second-vec[j][i]),abs(zhi->second-vec[j][i]))));
                }
                zhiqian.insert(make_pair(vec[j][i], vec[j][i]));
            }
            else{
                printf("Round #%d: %d is out.\n", i+1, j+1);
                tag[j] = 1;
                if (count(tag,tag+n,0)==0)
                {
                    printf("No winner.");
                    return 0;
                }
                
            }
        }
    }
    if (count(tag,tag+n,0)!=0)
    {
        printf("Winner(s):");
    }
    for (int i = 0; i < n; i++)
    {
        if (tag[i]==0)
        {
            printf(" %d", i+1);
        }
        
    }
    
}