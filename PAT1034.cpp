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
struct youlishu
{
    int zheng;
    int zhengshu;
    int fenzi;
    int fenmu;
};

int main(){
    youlishu you1, you2;
    int a, b;
    scanf("%d/%d", &a, &b);
    if (abs(a)>abs(b)&&a%b!=0)
    {
        you1.zhengshu = 0;//不是整数
        you1.zheng = a / b;
        you1.fenzi = a % b;
        you1.fenmu = b;
    }
    else if (a%b==0)
    {
        you1.zhengshu = 1;//不是整数
        you1.zhengshu = a / b;
    }
    else if (abs(a)<abs(b))
    {
        you1.fenzi = a;
        you1.fenmu = b;
    }
    scanf("%d/%d", &a, &b);
    if (abs(a)>abs(b)&&a%b!=0)
    {
        you2.zhengshu = 0;//不是整数
        you2.zheng = a / b;
        you2.fenzi = a % b;
        you2.fenmu = b;
    }
    else if (a%b==0)
    {
        you2.zhengshu = 1;//不是整数
        you2.zhengshu = a / b;
    }
    else if (abs(a)<abs(b))
    {
        you2.fenzi = a;
        you2.fenmu = b;
    }
    
}