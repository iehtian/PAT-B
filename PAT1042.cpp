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
    string s;
    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int a[30]={0};
    for (int i = 0; i <s.length() ; i++)
    {
        if (s[i]>=97&&s[i]<=122)
        {
            a[s[i] - 97]++;
        }
    }
    int count=0,cixu=0;
    for (int i = 0; i < 26; i++)
    {
        if(a[i]>count){
            count = a[i];
            cixu = i;
        }
    }
    printf("%c %d", cixu + 97, count);
}