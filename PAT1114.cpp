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
using namespace std;
bool judge(int n){
    if ((n%2==0||n==1)&&n!=2)//如果是偶数或者是1，不是素数，返回false
    {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i=i+2)//从3开始，依次判断n能否整除到根号n为止的奇数
    {
        if (n%i==0)//能整除，不是素数，返回false
        {
            return false;
        }
    }
    return true;//以上判断后函数仍未返回，说明为素数，返回true
}
int main(){
    string s;
    cin >> s;
    int tag = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        string s1=s.substr(i, n - i);
        int tem=stoi(s1);
        if (judge(tem)==true)
        {
            cout << s1 <<" Yes"<< endl;
        }
        else{
            cout << s1 <<" No"<< endl;
            tag = 1;
        }
    }
    if (tag==0)
    {
        cout<<"All Prime!";
    }
    
}