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
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    double d = ((double)a[0]+(double)a[1])/2;
    for (int i = 2; i < n; i++)
    {
        d = (d + (double)a[i]) / 2;
    }
    int dd = d;
    printf("%.d", dd);
}