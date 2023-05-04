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
#include<unordered_map>
using namespace std;
bool judge(double x,double y){
    if (x==y)
    {
        printf("Ping");
    }
    else if(x>y){
        printf("Gai");
    }
    else{
        printf("Cong");
    }
}
int main(){
    int n,x, y;
    int jia, yi;
    double bing;
    int tag = 0;
    scanf("%d%d%d", &n, &x ,& y);
    for (int i = 99; i >9; i--)
    {
        string s= to_string(i);
        reverse(s.begin(), s.end());
        int k = stoi(s);
        if (abs(i-k)*y==x*k)
        {
            jia = i;
            yi = k;
            bing = (double)k / (double)y;
            tag = 1;
            break;
        }
    }
    if (tag==1)
    {
        printf("%d ", jia);
        judge((double)n, (double)jia);
        printf(" ");
        judge((double)n, (double)yi);
        printf(" ");
        judge((double)n, bing);
    }
    else{
        printf("No Solution");
    }
    
}