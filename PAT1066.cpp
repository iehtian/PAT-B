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
int main(){
    int n, m, A, B, hui;
    scanf("%d%d%d%d%d", &n, &m, &A, &B, &hui);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int tem;
            scanf("%d", &tem);
            if (tem<=B&&tem>=A)
            {
                tem = hui;
            }
            if (j!=m-1)
            {
                printf("%03d ", tem);
            }
            else
                printf("%03d", tem);
        }
        printf("\n");
        }
    
}