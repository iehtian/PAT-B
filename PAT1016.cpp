#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    string a, b;
    char da, db;
    cin >> a >> da >> b >> db;
    int counta = a.length(), countb = b.length();
    int numa = 0, numb = 0;
    for (int i = 0; i < counta; i++)
    {
        if(a[i]==da){
            numa++;
        }
    }
    for (int i = 0; i < countb; i++)
    {
        if(b[i]==db){
            numb++;
        }
    }
    int Da = (int)da - 48,result1=0;
    for (int i = 0; i < numa; i++)
    {
        result1 = result1 * 10 + Da;
    }
    int Db = (int)db - 48, result2 = 0;
    for (int i = 0; i < numb; i++)
    {
        result2 = result2 * 10 + Db;
    }
    int result = result1 + result2;
    printf("%d", result);
}