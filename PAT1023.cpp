#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    int s[11];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &s[i]);
    }
    char s1[60];
    int count=0;
    memset(s1, '\0', sizeof(s1));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < s[i]; j++)
        {
            s1[count] = i+48;
            count++;
        }
        
    }
    sort(s1, s1 + strlen(s1));
    int n = strlen(s1);
    for (int i = 0; i < n; i++)
    {
        if(s1[i]==48)
            continue;
        else{
            printf("%c", s1[i]);
            s1[i] = -1;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(s1[i]>=48)
            printf("%c", s1[i]);
    }
}