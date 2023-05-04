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
struct yubin
{
    int xiaoliang;
    int bianhao;
};
bool cmp(yubin y1,yubin y2){
    if(y1.xiaoliang>y2.xiaoliang){
        return true;
    }else if (y1.xiaoliang==y2.xiaoliang)
    {
        if (y1.bianhao<y2.bianhao)
        {
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
    
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int t;
            scanf("%d", &t);
            mp[j] += t;
        }
    }
    yubin yu[n];
    for (int i = 0; i < n; i++)
    {
        yu[i].bianhao = i + 1;
        yu[i].xiaoliang = mp[i];
    }
    sort(yu, yu + n, cmp);
    int zuida = yu[0].xiaoliang;
    printf("%d\n", zuida);
    printf("%d", yu[0].bianhao);
    for (int i = 1; i < n; i++)
    {
        if (yu[i].xiaoliang==zuida)
        {
            printf(" %d", yu[i].bianhao);
        }
        else{
            return 0;
        }
        
    }
    
}