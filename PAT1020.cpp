#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
struct yuebing
{
    double kuncun;
    double zongjia;
    double danjia;
};
bool cmp(yuebing a,yuebing b){
    return a.danjia > b.danjia;
}
int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    yuebing yue[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &yue[i].kuncun);
    }
    for (int i = 0; i < n; i++)
    {
         scanf("%lf", &yue[i].zongjia);
        yue[i].danjia = yue[i].zongjia / yue[i].kuncun;
    }
    sort(yue, yue + n, cmp);
    int i = 0;
    double sum=0;
    while (m>0&&i<n)
    {
        if(m>=yue[i].kuncun){
            sum = sum + yue[i].zongjia;
            m = m - (int)yue[i].kuncun;
            i++;
        }
        else{
            sum = sum + yue[i].zongjia*(double)m/yue[i].kuncun;
            m = 0;
            i++;
        }
    }
    printf("%.2f", sum);
}