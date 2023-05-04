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
struct ti
{
    int num;
    int manfen;
    int zongshu;
    int zhengquegeshu;
    int cuowucishu = 0;
    string daan;
};
bool cmp(ti t1,ti t2){
    return t1.cuowucishu > t2.cuowucishu;
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    ti t[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d%d", &t[i].manfen, &t[i].zongshu, &t[i].zhengquegeshu);
        t[i].num = i+1;
        for (int j = 0; j < t[i].zhengquegeshu; j++)
        {
            char c;
            getchar();
            scanf("%c", &c);
            t[i].daan += c;
        }
    }
    int a[n] = {0};
    getchar();
    for (int i = 0; i < n; i++)
    {
        string da;
        getline(cin, da);
        int biao = 1;
        for (int j = 0; j < m; j++)
        {
            if(da[biao]-48!=t[j].zhengquegeshu){
                t[j].cuowucishu++;
                biao += (da[biao] - 48) * 2 + 4;
                continue;
            }
            string dd;
            for (int k = 0; k < t[j].zhengquegeshu; k++)
            {
                biao = biao + 2;
                dd += da[biao];
            }
            if (dd!=t[j].daan)
            {
                t[j].cuowucishu++;
                biao +=  4;
                continue;
            }
            a[i] += t[j].manfen;
            biao +=  4;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    if (t[0].cuowucishu==0)
    {
        printf("Too simple");
        return 0;
    }
    sort(t, t + m, cmp);
    printf("%d", t[0].cuowucishu);
    for (int i = 0; i < m; i++)
    {
        if (t[i].cuowucishu==t[0].cuowucishu)
        {
            printf(" %d", t[i].num);
        }
    }
}