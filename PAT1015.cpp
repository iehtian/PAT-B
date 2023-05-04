#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
struct stu
{
    int xuehao;
    int de;
    int cai;
    int lei=5;
    int zong;
};
bool cmp(stu a,stu b){
        return a.lei < b.lei;
}
bool cmp2(stu a,stu b){
    if(a.zong>b.zong){
        return true;
    }else if(a.zong==b.zong){
        if(a.de>b.de){
            return true;
        }else if(a.de==b.de){
            if(a.xuehao<b.xuehao){
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
    int n, l, h,sum=0;
    scanf("%d%d%d", &n, &l, &h);
    stu s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &s[i].xuehao, &s[i].de, &s[i].cai);
        s[i].zong = s[i].de + s[i].cai;
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i].de>=h&&s[i].cai>=h){
            s[i].lei = 1;
            sum++;
        }
        else if (s[i].de>=h&&s[i].cai<h&&s[i].cai>=l)
        {
            s[i].lei = 2;
            sum++;
        }
        else if(s[i].de>=l&&s[i].cai>=l&&s[i].de>=s[i].cai){
            s[i].lei = 3;
            sum++;
        }else if(s[i].de>=l&&s[i].cai>=l){
            s[i].lei = 4;
            sum++;
        }
    }
    sort(s, s + n, cmp);
    int begin =0, end  = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].lei == s[begin].lei && i == n - 1) {
                sort(s + begin, s + n, cmp2);
            }
        if(s[i].lei==s[begin].lei){
            continue;
        }else{
            end = i;
            if(end==n-1)
                end = n;
            sort(s + begin, s + end, cmp2);
            begin = i;
        }
        
    }

    printf("%d\n", sum);
    for (int i = 0; i < n; i++)
    {
        if(s[i].lei!=5){
            printf("%d %d %d\n", s[i].xuehao, s[i].de, s[i].cai);
        }
    }
}