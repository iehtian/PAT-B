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
    long long zheng=0;
    long long fenzi;
    long long fenmu;
};
long long gongyueshu(long long x, long long y)//辗转相除法求最大公约数，适用于负数
{	
	long long z = y;
	while(x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	}
	return z;
}
long long gongbeishu(long long x,long long y){
return x*y/gongyueshu(x,y);
}
youlishu inityou(long long c,long long d){
    youlishu you1;
    long long a = c / gongyueshu(abs(c), d);
    long long b = d / gongyueshu(abs(c), d);
    if (abs(a)>=abs(b))
    {
        you1.zheng = a / b;
        you1.fenzi = a % b;    
        you1.fenmu = b;
    }
    else{
        you1.fenzi = a;
        you1.fenmu = b;
    }
    return you1;
}
void print(youlishu y){
    if (y.zheng==0&&y.fenzi==0)
    {
        printf("0");
    }
    else if(y.zheng!=0&&y.fenzi==0){
        if(y.zheng>0)
            printf("%lld", y.zheng);
        else
        printf("(%lld)", y.zheng);
    }
    else if(y.zheng==0&&y.fenzi!=0){
        if(y.fenzi<0)
            printf("(%lld/%lld)", y.fenzi, y.fenmu);
        else
            printf("%lld/%lld", y.fenzi, y.fenmu);
    }
    else if(y.zheng!=0&&y.fenzi!=0){
        if (y.fenzi<0)
            printf("(%lld %lld/%lld)", y.zheng, abs(y.fenzi), y.fenmu);
        else
            printf("%lld %lld/%lld", y.zheng, y.fenzi, y.fenmu);
    }
}

int main(){
    youlishu you1, you2;
    int a, b;
    scanf("%d/%d", &a, &b);
    you1 = inityou(a, b);
    int c, d;
    scanf("%d/%d", &c, &d);
    you2 = inityou(c, d);
    long long zuixiaogngbeishu = gongbeishu(you1.fenmu, you2.fenmu);
    long long fenzi = zuixiaogngbeishu / you1.fenmu * you1.fenzi + zuixiaogngbeishu / you2.fenmu * you2.fenzi;
    youlishu you3 = inityou(fenzi + (you1.zheng + you2.zheng)*zuixiaogngbeishu, zuixiaogngbeishu);
    print(you1);
    printf(" + ");
    print(you2);
    printf(" = ");
    print(you3);
    printf("\n");
    fenzi=zuixiaogngbeishu / you1.fenmu * you1.fenzi - zuixiaogngbeishu / you2.fenmu * you2.fenzi;
    you3=inityou(fenzi + (you1.zheng - you2.zheng)*zuixiaogngbeishu, zuixiaogngbeishu);
    print(you1);
    printf(" - ");
    print(you2);
    printf(" = ");
    print(you3);
    printf("\n");
    fenzi=(zuixiaogngbeishu / you1.fenmu * you1.fenzi+zuixiaogngbeishu*you1.zheng) * (zuixiaogngbeishu / you2.fenmu * you2.fenzi+zuixiaogngbeishu*you2.zheng);
    long long fenmu = zuixiaogngbeishu * zuixiaogngbeishu;
    you3=inityou(fenzi, fenmu);
    print(you1);
    printf(" * ");
    print(you2);
    printf(" = ");
    print(you3);
    printf("\n");
    if (you2.fenzi==0&&you2.zheng==0)
    {
        print(you1);
        printf(" / ");
        print(you2);
        printf(" = ");
        printf("Inf");
    }
    else
    {
        youlishu y;
        if (c<0)
        {
            d = 0 - d;
            c = 0 - c;
        }
        y = inityou(d, c);
        zuixiaogngbeishu = gongbeishu(you1.fenmu, y.fenmu);
        fenzi=(zuixiaogngbeishu / you1.fenmu * you1.fenzi+zuixiaogngbeishu*you1.zheng) * (zuixiaogngbeishu / y.fenmu * y.fenzi+zuixiaogngbeishu*y.zheng);
        fenmu = zuixiaogngbeishu * zuixiaogngbeishu;
        you3=inityou(fenzi, fenmu);
        print(you1);
        printf(" / ");
        print(you2);
        printf(" = ");
        print(you3);
    }
    
}