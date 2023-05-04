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
    int n, d;
    double e;
    scanf("%d%lf%d", &n, &e, &d);
    int kek=0, k=0;
    for (int i = 0; i < n; i++)
    {
        int day1,day2;
        scanf("%d", &day1);
        double b[day1];
        int ci=0;
        for (int j = 0; j < day1; j++)
        {
            scanf("%lf", &b[j]);
            if (b[j]<e)
            {
                ci++;
            }
        }
        day2 = day1 / 2;
        if (ci>day2)
        {
            kek++;
            if (day1>d)
            {
                k++;
                kek--;
            }
        }
    }
    double res1 = (double)kek / n * 100;
    double res2 = (double)k / n * 100;
    printf("%.1f%% ", res1);
    printf("%.1f%%", res2);
}