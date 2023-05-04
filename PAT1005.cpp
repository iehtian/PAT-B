#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int num[n],judge[n]={0},tem[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(judge[i]==1)
            continue;
        tem[i] = num[i];
        for (int j = 0; tem[i]!=1; j++)
        {
            if (tem[i]%2==0)
            {
                tem[i] = tem[i] / 2;
                int *ans = find(num, num + n, tem[i]);
                if(ans-num!=n){
                    judge[ans - num] = 1;
                }
            }else{
                tem[i] = (3 * tem[i] + 1)/2;
                int *ans = find(num, num + n, tem[i]);
                if(ans-num!=n){
                    judge[ans - num] = 1;
                }
            }
        }
    }
    int ans[count(judge, judge + n, 0)],m=0;
    for (int i = 0; i < n; i++)
    {
        if(judge[i]==0){
            ans[m]=num[i];
            m++;
        }
    }
    sort(ans, ans + m);
    for (int i = m-1; i >= 0; i--)
    {
        if(i!=0)
            printf("%d ", ans[i]);
        else
            printf("%d", ans[i]);
    }
    
}