#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
using namespace std;
struct stu
{
    char zhunkao[20];
    int shi;
    int kao;
};
int main(){
    int n;
    scanf("%d", &n);
    stu s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d%d", s[i].zhunkao, &s[i].shi, &s[i].kao);
    }
    int m;
    scanf("%d", &m);
    int cha[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &cha[i]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cha[i]==s[j].shi)
            {
                printf("%s %d", s[j].zhunkao, s[j].kao);
            }
        }
        printf("\n");
    }
    
    
}
