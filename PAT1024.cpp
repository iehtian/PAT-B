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
int main(){
    string s;
    cin >> s;
    char zhengfu = s[0];
    int elocation = s.find("E");
    int dotlocation = s.find(".");
    string zhengshu = s.substr(1, dotlocation-1);
    char zhishuzhengfu = s[elocation + 1];
    string xiaoshu = s.substr(dotlocation + 1, elocation - dotlocation-1);
    int qianweishu = zhengshu.length();
    string zhishu = s.substr(elocation+1, s.length() - elocation);
    int izhishu = stoi(zhishu);
    if (izhishu==0)
    {
        for (int i = 0; i < xiaoshu.length(); i++)
        {
            xiaoshu[i] = '0';
        }
        if (zhengfu=='-')
            cout << zhengfu << "1." << xiaoshu;
        else
            cout << "1." << xiaoshu;
    }
    if (izhishu<0)
    {
        string zheng;
        if (zhengfu=='-')
        {
            printf("-");
        }
        printf("0.");
        for (int i = 0; i < abs(izhishu)-1; i++)
        {
            printf("0");
        }
        cout << zhengshu << xiaoshu;
    }
    else{
        if (zhengfu=='-')
        {
            printf("-");
        }
        if (izhishu>=xiaoshu.length())
        {
            cout << zhengshu << xiaoshu;
            for (int i = 0; i < izhishu-xiaoshu.length(); i++)
            {
                printf("0");
            }
        }
        else{
            cout << zhengshu;
            for (int i = 0; i < izhishu; i++)
            {
                cout << xiaoshu[i];
            }
            cout << ".";
            for (int i = izhishu; i < xiaoshu.length(); i++)
            {
                cout << xiaoshu[i];
            }
            
        }
    }
    
}