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
    string s1, s2;
    cin >> s1 >> s2;
    
    while (s1[0]=='0')
    {
        s1.erase(s1.begin());
    }
    while (s2[0]=='0')
    {
        s2.erase(s2.begin());
    }
    int k = max(s1.length(), s2.length());
    if (k==0)
    {
        printf("0");
        return 0;
    }
    
    while (s1.length()<k)
    {
        s1 = "0"+s1;
    }
    while (s2.length()<k)
    {
        s2 = "0"+s2;
    }
    int jinwei = 0;
    string s3;
    for (int i = k-1; i >=0; i--)
    {
        int a, b;
        string m;
        if (s1[i]>=97)
        {
            a = s1[i] - 87;
        }
        else{
            a = s1[i] - 48;
        }
        if (s2[i]>=97)
        {
            b = s2[i] - 87;
        }
        else{
            b = s2[i] - 48;
        }
        if (a+b+jinwei>=30)
        {
            if (a+b+jinwei-30>=10)
            {
                m = a + b + jinwei - 40 + 97;
            }
            else{
                m = a + b + jinwei - 30 + 48;
            }
            jinwei = 1;
        }
        else{
            if (a+b+jinwei>=10)
            {
                m = a + b + jinwei - 10 + 97;
            }
            else{
                m = a + b + jinwei + 48;
            }
            jinwei = 0;
        }
        if (i==0&&jinwei==1)
        {
            s3 += m;
            s3 += 49;
            break;
        }
        s3 += m;
    }
    reverse(s3.begin(), s3.end());
    cout << s3;
}