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
    long double a,res=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%llf", &a);
        res += a * (double)(i + 1) * (double)(n - i);
    }
    printf("%.2llf", res);
}