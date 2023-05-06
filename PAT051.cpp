#include<algorithm>
#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
struct fushu
{
    double shibu, xubu;
};

int main(){
    double r1, p1, r2, p2;
    // scanf("%f%f%f%f", &r1, &p1, &r2, &p2);
    cin >> r1 >> p1 >> r2 >> p2;
    fushu f1, f2;
    f1.shibu = r1 * cos(p1);
    f1.xubu = r1 * sin(p1);
    f2.shibu = r2 * cos(p2);
    f2.xubu = r2 * sin(p2);
    fushu jieguo;
    jieguo.shibu = f1.shibu * f2.shibu - f1.xubu * f2.xubu;
    jieguo.xubu = f1.shibu * f2.xubu + f1.xubu * f2.shibu;
    // printf("%.2f", jieguo.shibu);
    string s = to_string(jieguo.shibu);
    if (jieguo.shibu<0&&jieguo.shibu>-0.005)
    {
        printf("0.00");
    }
    else{
        printf("%.2f", jieguo.shibu);
    }
    if (jieguo.xubu<0&&jieguo.xubu>-0.005)
    {
        printf("+0.00i");
    }
    
    else if (jieguo.xubu<0)
    {
        printf("%.2fi", jieguo.xubu);
    }
    else{
        printf("+%.2fi", jieguo.xubu);
    }
}