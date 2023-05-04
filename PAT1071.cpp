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
    int T, K;
    scanf("%d%d", &T, &K);
    for (int i = 0; i < K; i++)
    {
        int n1, b, t, n2;
        scanf("%d%d%d%d", &n1, &b, &t, &n2);
        if (t>T)
        {
            printf("Not enough  tokens. Total = %d.\n", T);
            continue;
        }
        if ((n1<n2&&b==1)||(n1>n2&&b==0))
        {
            T += t;
            printf("Win %d!  Total = %d.\n", t, T);
        }
        else{
            T = T-t;
            printf("Lose %d.  Total = %d.\n", t, T);
        }
        if (T==0)
        {
            printf("Game Over.");
            return 0;
        }
        
    }
    
}