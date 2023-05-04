#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    int n;
    long long int p;
    scanf("%d%lld", &n, &p);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    sort(num, num + n);
    double res = -1;
    for (int i = 0; i < n; i++)
    {
        long long int  k = num[i] * p;
        int *up = upper_bound(num, num + n, k);
        if(up-num-i>res){
            res = up - num - i;
        }
    }
    printf("%.0f\n", res);
}