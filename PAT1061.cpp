#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
#include <sstream>
using namespace std;
struct panduan
{
    int grade;
    int judge;
};

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    panduan p[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &p[i].grade);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &p[i].judge);
    }
    for (int i = 0; i < n; i++)
    {
        int res = 0;
        for (int j = 0; j < m; j++)
        {
            int tem;
            scanf("%d", &tem);
            if(tem==p[j].judge){
                res += p[j].grade;
            }
        }
        printf("%d\n", res);
        res = 0;
    }
    
}