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
    int n, manfen;
    scanf("%d%d", &n, &manfen);
    for (int i = 0; i < n; i++)
    {
        int laoshi=0;
        int a[n];
        fill(a, a + n, manfen + 1);
        for (int j = 0; j < n; j++)
        {
            if (j==0)
            {
                scanf("%d", &laoshi);
            }
            else
                scanf("%d", &a[j]);
        }
        sort(a, a + n);
        int count=0;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            if (a[i]>=0&&a[i]<=manfen)
            {
                b[count] = a[i];
                count++;
            }
        }
        double zong = 0;
        for (int i = 1; i < count-1; i++)
        {
            zong += b[i];
        }
        double g1 = zong / (count - 2);
        double g2 = round((g1 + laoshi) / 2);
        printf("%.0f\n", g2);
    }
    
}