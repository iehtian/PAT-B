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
    int n, m;
    scanf("%d%d", &n, &m);
    int num[m],count=2;
    num[0] = 2;
    num[1] = 3;
    for (int i = 5; count <m ; i=i+2)
    {
        bool tag=judge(i);
        if(tag==true){
            num[count] = i;
            count++;
        }
    }
    count = 0;
    for (int i = n-1; i < m-1; i++)
    {
        if(count!=9){
            printf("%d ", num[i]);
            count++;
        }
        else{
            printf("%d\n", num[i]);
            count = 0;
        }
    }
    printf("%d", num[m - 1]);
}