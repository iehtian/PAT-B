#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>
using namespace std;
struct stu{
    char name[11];
    char sign[11];
    int grade;
};
int main(){
    int n;
    scanf("%d", &n);
    stu s[n];
    int maxgrade = -1, mingrade = 101, maxnum = -1, minnum = -1;
    for (int  i = 0; i < n; i++)
    {
        scanf("%s%s%d", s[i].name, s[i].sign, &s[i].grade);
        if(s[i].grade>maxgrade){
            maxgrade = s[i].grade;
            maxnum = i;
        }
        if(s[i].grade<mingrade){
            mingrade = s[i].grade;
            minnum = i;
        }
    }
    printf("%s %s\n", s[maxnum].name, s[maxnum].sign);
    printf("%s %s", s[minnum].name, s[minnum].sign);
    }