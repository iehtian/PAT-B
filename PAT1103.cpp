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
#include<unordered_set>
#include<iomanip>
using namespace std;
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int tag = 0;
    for (int i = n; i <= m; i++)
    {
        if (i==1)
        {
            continue;
        }
        
        int k = sqrt(pow(i, 3) - pow(i - 1, 3));
        if (k*k==pow(i, 3) - pow(i - 1, 3))
        {
            for (int j = 1; ; j++)
            {
                if (pow(j,2)+pow(j-1,2)>k)
                {
                    break;
                }
                else if (pow(j,2)+pow(j-1,2)==k)
                {
                    printf("%d %d\n", i, j);
                    tag = 1;
                    break;
                }
            }
        }
        
    }
    if (tag==0)
    {
        printf("No Solution");
    }
}