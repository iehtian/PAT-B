#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include <stack>
using namespace std;
int main(){
     int a, b, c, d, e;
    double fa, fb;
    scanf("%d/%d %d/%d %d", &a, &b,&c,&d,&e);
    int x1 = a * e, x2 = b * e, x3 = c * e, x4 = d * e;
    int num[1000],count=0;
    for (int i = 1; i*b<x3; i++)
    {
        if (i*b>x1&&e%i!=0)
        {
            num[count] = i;
            count++;
        }
        
    }
    for (int i = 0; i < count; i++)
    {
        if (i!=count-1)
        {
            printf("%d/%d ", num[i], e);
        }
        else
            printf("%d/%d", num[i], e);

    }
    
}