#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
using namespace std;
bool cmp(int a[3],int b[3]){
    if(a[0]>b[0])
        return false;
    else if(a[0]==b[0]){
        if(a[1]>b[1])
            return false;
        else if(a[1]==b[1]){
            if(a[2]>b[2])
                return false;
            else
                return true;
        }
        else
            return true;
    }
    else
        return true;
}
int main(){
    int yingfu[3], shifu[3], zhaoling[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &yingfu[i]);
        getchar();
    }
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &shifu[i]);
        getchar();
    }
    bool tag = cmp(yingfu, shifu);
    if(tag==true){
        zhaoling[2] = shifu[2] - yingfu[2];
        if (zhaoling[2]<0)
        {
            shifu[1]--;
            zhaoling[2] += 29;
        }
        zhaoling[1] = shifu[1] - yingfu[1];
        if(zhaoling[1]<0){
            shifu[0]--;
            zhaoling[1]=zhaoling[1] + 17;
        }
        zhaoling[0] = shifu[0] - yingfu[0];
        for (int i = 0; i < 3; i++)
        {
            printf("%d", zhaoling[i]);
            if(i!=2)
                printf(".");
        }
    }
    else
    {
        zhaoling[2] = yingfu[2] - shifu[2];
    if (zhaoling[2]<0)
    {
        yingfu[1]--;
        zhaoling[2] += 29;
    }
    zhaoling[1] = yingfu[1] - shifu[1];
    if(zhaoling[1]<0){
        yingfu[0]--;
        zhaoling[1]=zhaoling[1] + 17;
    }
    zhaoling[0] = yingfu[0] - shifu[0];
    printf("-");
    for (int i = 0; i < 3; i++)
    {
        printf("%d", zhaoling[i]);
        if(i!=2)
            printf(".");
    }
    }
    
    
}