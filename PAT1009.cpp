#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    char s[100];
    cin.getline(s,100);
    int n = strlen(s);
    int m = n - 1;
    for (int i = n-1; i >=0; i--)
    {
        if(s[i]==' '){
            for (int j = i+1; j <= m; j++)
            {
                printf("%c", s[j]);
            }
            printf(" ");
            m = i - 1;
        }
    }
    for (int i = 0; i <=m; i++)
    {
        printf("%c", s[i]);
    }
    
}