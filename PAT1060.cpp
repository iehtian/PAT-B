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
    int e,res1[n];
    for (int i = 0; i < n; i++)
    {
        int *p = upper_bound(a,a+n,i+1);
        int b = (int)(a+n-p);
        res1[i] = min(b, i+1);
        e = max(res1[i], e);
    }
    printf("%d", e);
}