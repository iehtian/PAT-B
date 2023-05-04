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
    double ma=-1;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        double tem = sqrt(pow(a, 2) + pow(b, 2));
        ma = max(ma, tem);
    }
    printf("%.2f", ma);
}