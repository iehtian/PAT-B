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
    int d, n;
    scanf("%d%d", &d, &n);
    string s1;
    s1 += d+48;
    if (n==1)
    {
        printf("%d", d);
        return 0;
    }
    if (n==2)
    {
        printf("%d1", d);
        return 0;
    }
    s1 += "1";
    for (int i = 0; i < n-2; i++)
    {
        char tem = s1[0];
        string s2;
        int jishu = 0;
        for (int j = 0; j < s1.length(); j++)
        {
            if (s1[j]==tem)
            {
                jishu++;
            }
            else{
                s2 += tem+to_string(jishu);
                tem = s1[j];
                jishu = 1;
            }
        }
        s2 += tem+to_string(jishu);
        s1 = s2;
    }
    cout << s1;
}
