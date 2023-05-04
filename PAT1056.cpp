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
int main(){
    int n;
    scanf("%d", &n);
    int a[n],res=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j==i)
                continue;
            res += a[i] * 10 + a[j];
        }
        
    }
    printf("%d", res);
}