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
#include<unordered_set>
#include<iomanip>
#include<deque>
using namespace std;
int main(){
    string a,b;
    cin >> a;
    b = a;
    reverse(b.begin(), b.end());
    if (a==b)
    {
        cout << a << " is a palindromic number.";
        return 0;
    }
    int m,count=0;
    while (1)
    {
        count++;
        int k = b.length(),tem=0;
        cout << a << " + " << b << " = ";
        string c;
        for (int i = k-1; i >=0; i--)
        {
            
            if (a[i]+b[i]-96+tem>=10)
            {
                m = a[i] + b[i]+tem - 96 - 10;
                tem = 1;
                
            }else{
                m = a[i] + b[i]+tem - 96;
                tem = 0;
                
            }
            if (i!=0)
            {
                c += m+48;
            }
            else if (i==0&&tem==0)
            {
                c += m+48;
            }
            
            else if (i==0&&tem==1)
            {
                c += m+48;
                c += 49;
            }
        }
        b = c;
        a = c;
        reverse(a.begin(), a.end());
        cout << a << endl;
        if (a==b&&count<=10)
        {
            cout << a << " is a palindromic number.";
            return 0;
        }
        else if (count==10)
        {
            cout << "Not found in 10 iterations.";
            return 0;
        }
        
    }
    
}