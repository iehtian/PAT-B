#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
struct resident
{
    char name[10];
    int year;
    int mon;
    int day;
    int judge;
};
bool cmp(resident a,resident b){
    return a.judge < b.judge;
}
bool cmp2(resident a,resident b){
    if(a.year<b.year){
        return true;
    }else if(a.year==b.year){
        if(a.mon<b.mon){
            return true;
        }else if (a.mon==b.mon)
        {
            if(a.day<b.day){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }else{
        return false;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    resident res[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d/%d/%d",res[i].name,&res[i].year,&res[i].mon,&res[i].day);
        if(res[i].year<1814||(res[i].year==1814&&res[i].mon<9)||(res[i].year==1814&&res[i].mon==9&&res[i].day<6))
            res[i].judge = 1;//无效数据
        else if(res[i].year>2014||(res[i].year==2014&&res[i].mon>9)||(res[i].year==2014&&res[i].mon==9&&res[i].day>6))
            res[i].judge = 1;
        else
            res[i].judge = 0;
    }
    sort(res, res + n, cmp);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(res[i].judge==0)
            count++;
        else
            break;
    }
    if(count==0){
        printf("%d", count);
        return 0;
    }
    printf("%d ", count);
    sort(res, res + count, cmp2);
    printf("%s %s", res[0].name, res[count - 1].name);
}