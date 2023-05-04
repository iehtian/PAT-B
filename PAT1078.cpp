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
int main(){
    char c;
    c = getchar();
    getchar();
    if (c=='C')
    {
        string s;
        getline(cin, s);
        queue<char> q1,q2;
        queue<int> q3;
        for (int i = 0; i < s.length(); i++)
        {
            q1.push(s[i]);
        }
        int count = 0;
        char tem=q1.front();
        int f = s.length();
        for (int i = 0;q1.empty()!=true; i++)
        {
            if (tem==q1.front())
            {
                q1.pop();
                count++;
                if (q1.empty()==true)
                {
                    q3.push(count);
                    q2.push(tem);
                    break;
                }
            }
            else if (tem!=q1.front()&&count==1)
            {
                q3.push(count);
                q2.push(tem);
                tem = q1.front();
                count = 0;
            }
            else if (tem!=q1.front()&&count!=1)
            {
                q3.push(count);
                count = 0;
                q2.push(tem);
                tem = q1.front();
            }
        }
        while (q2.empty()!=true)
        {
            if (q3.front()!=1)
            {
                printf("%d", q3.front());
                printf("%c", q2.front());
                q2.pop();
                q3.pop();
            }
            else{
                printf("%c", q2.front());
                q2.pop();
                q3.pop();
            }
        }
    }
    else{
        string s;
        getline(cin, s);
        while (s.length()!=0)
        {
            int k = s.find_first_not_of("1234567890");
            if (k==0)
            {
                cout << s[0];
                s.erase(s.begin());
            }
            else{
                string ss = s.substr(0, k);
                stringstream sss;
                sss << ss;
                int tem;
                sss >> tem;
                for (int i = 0; i < tem; i++)
                {
                    cout << s[k];
                }
                s.erase(s.begin(), s.begin() + k + 1);
            }
        }
        
    }
}