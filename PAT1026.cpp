#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
#define clk_tck 100
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int c = b - a;
    double d = (double)((double)(c) / clk_tck);
    int hh = d / 3600;
    d = d - hh * 3600;
    int mm = d / 60;
    d = d - mm * 60;
    double ss = round(d);
    printf("%02d:%02d:%02.0lf", hh, mm, ss);
}