#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    string jinzhi, num1, num2, res;
    cin >> jinzhi >> num1 >> num2;
    
    if (num1.find_first_of("123456789")==-1&&num2.find_first_of("123456789")==-1)
    {
        printf("0");
        return 0;
    }
    jinzhi = "0" + jinzhi;
    int len = jinzhi.length();
    while (num1.length()<len)
    {
        num1 = "0" + num1;
    }
    while (num2.length()<len)
    {
        num2 = "0" + num2;
    }
    int jinwei = 0;
    for (int i = len-1; i >=0; i--)
    {
        char c = num1[i] + num2[i] + jinwei - 48;
        if (c>=jinzhi[i]&&jinzhi[i]!='0')
        {
            c = c - jinzhi[i]+48;
            jinwei = 1;
            
        }else if(c>57&&jinzhi[i]=='0'){
            c = c - 10;
            jinwei = 1;
        }
        else{
            jinwei = 0;
        }
        res = c+res;
    }
    int location = res.find_first_not_of("0");
    cout << res.substr(location, res.length() - location);
}