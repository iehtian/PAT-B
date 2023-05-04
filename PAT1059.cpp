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
using namespace std;
struct stu
{
    int id;
    int num;
    int judge = 0;
};
bool judgesu(int a){
    for (int i = 3; i <=sqrt(a) ; i=i+2)
    {
        if (a%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int main(){
    int n;
    scanf("%d", &n);
    int s[n + 1],jud[n+1]={0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i+1]);
    }
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int cha;
        scanf("%d", &cha);
        int *p = find(s, s + n + 1, cha);
        int a = p - s;
        if (a==n+1)
        {
            printf("%04d: Are you kidding?\n", cha);
            continue;
        }
        
        if (jud[a]==1)
        {
            printf("%04d: Checked\n", s[a]);
            continue;
        }
        
        
        if (a==1)
        {
            printf("%04d: Mystery Award\n", s[a]);
        }
        else if(a==2){
            printf("%04d: Minion\n", s[a]);
        }
        else if (a%2==0)
        {
            printf("%04d: Chocolate\n", s[a]);
        }
        else if (judgesu(a)==true)
        {
            printf("%04d: Minion\n", s[a]);
        }
        else{
            printf("%04d: Chocolate\n", s[a]);
        }
        jud[a] = 1;
    }
    
}
