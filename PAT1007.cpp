#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
bool judge(int n){//判断是否为素数的函数
    for (int i = 3; i <= (int)sqrt(n); i=i+2)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n, count = 0;
    scanf("%d", &n);
    int tem = 3;
    for (int i = 5; i <= n; i=i+2)
    {
        bool b = judge(i);
        if(b==true){
            if(i-tem==2)
                count++;
            tem = i;
        }

    }
    printf("%d", count);
}