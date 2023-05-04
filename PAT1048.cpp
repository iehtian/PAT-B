#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
#include <sstream>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    string s3;
    int tag=0;
    int m = s2.length(),n=s1.length();
    int k = max(m, n);
    while (s1.length()<k)
    {
        s1 +="0";
    }
    while (s2.length()<k)
    {
        s2 +="0";
    }
    for (int i = 0; i < k; i++)
    {
        if(tag==0){
            if (i%2==0)
            {
                int dtem = ((int)s1[i] - 48 + (int)s2[i] - 48) % 13;
                string c;
                if(dtem<10)
                    c = dtem + 48;
                else if(dtem==10)
                    c = "J";
                else if(dtem==11)
                    c = "Q";
                else if(dtem==12)
                    c = "K";
                s3=s3+c;
            }
            else{
                int dtem = (int)s2[i] - (int)s1[i];
                if(dtem<0)
                    dtem += 10;
                char c = dtem + 48;
                s3 += c;
            }
        }
    }
    reverse(s3.begin(), s3.end());
    cout << s3;
}