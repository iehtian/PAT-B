#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;

struct PAT1008
{
    int sign;
    int num;
};
bool com(PAT1008 a,PAT1008 b){
    return a.sign < b.sign;
}
int main(){
    int n,m;
    scanf("%d%d", &n,&m);
    PAT1008 s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i].num);
        s[i].sign = i;
    }
    for (int i = 0; i < n; i++)
    {
        s[i].sign = (s[i].sign + m) % n;
    }
    sort(s, s + n, com);
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", s[i].num);
    }
    printf("%d", s[n - 1].num);
}