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
bool judgenum(string s){
    return s.find_first_not_of("0123456789.") == string::npos;
}
bool judgeword(string s){
    return s.find_first_not_of("qwertyuiopasdfghjklzxcvbnm.") == string::npos;
}
bool judgelegitimate(string s){
    return s.find_first_not_of("0123456789qwertyuiopasdfghjklzxcvbnm.") == string::npos;
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s.length()<6)
        {
            printf("Your password is tai duan le.\n");
            continue;
        }
        if (judgelegitimate(s)==false)
        {
            printf("Your password is tai luan le.\n");
            continue;
        }
        if (judgenum(s)&&judgeword(s)==false)
        {
            printf("Your password needs zi mu.\n");
            continue;
        }
        else if (judgeword(s)&&judgenum(s)==false)
        {
            printf("Your password needs shu zi.\n");
            continue;
        }
        printf("Your password is wan mei.\n");
    }
    
}