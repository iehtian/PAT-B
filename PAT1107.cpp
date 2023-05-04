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
    int n, m,ma=-1;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        int matem=-1;
        for (int j = 0; j < m; j++)
        {
            int tem;
            scanf("%d", &tem);
            matem = max(tem, matem);
        }
        ma = max(ma, matem);
        if (i!=n-1)
        {
            printf("%d ", matem);
        }
        else{
            printf("%d\n", matem);
            printf("%d", ma);
        }
    }
    
}