#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
void BAI(int n){
    for (int i = 0; i < n; i++)
    {
        printf("B");
    }
}
void SHI(int n){
    for (int i = 0; i < n; i++)
    {
        printf("S");
    }
}
void GE(int n){
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    
}
int main(){
    char s[5];
    scanf("%s", s);
    int n = strlen(s);
    if (n==3)
    {
        BAI(s[0] - 48);
        SHI(s[1] - 48);
        GE(s[2] - 48);
    }
    else if(n==2){
        SHI(s[0] - 48);
        GE(s[1] - 48);
    }
    else {
        GE(s[0] - 48);
    }
}