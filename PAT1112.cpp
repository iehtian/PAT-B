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
    int n, m, ma = -1;
    scanf("%d%d", &n, &m);
    int a[n],count=0,tag=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        ma = max(a[i], ma);
        if (a[i]>m)
        {
            count++;
        }
        else if(count!=0){
            printf("[%d, %d]\n", i - count, i - 1);
            tag = 1;
            count = 0;
        }
    }
    if (count!=0)
    {
        printf("[%d, %d]", n - count, n - 1);
        tag = 1;
    }
    if (tag==0)
    {
        printf("%d", ma);
    }
    
}