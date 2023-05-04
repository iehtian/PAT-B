#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    char s[1000];
    scanf("%s", s);
    int result[10]={0};
    int count = strlen(s);
    for (int i = 0; i < count; i++)
    {
        switch (s[i])
        {
        case 48:
            result[0]++;
            break;
        case 49:
            result[1]++;
            break;
        case 50:
            result[2]++;
            break;
        case 51:
            result[3]++;
            break;
        case 52:
            result[4]++;
            break;
        case 53:
            result[5]++;
            break;
        case 54:
            result[6]++;
            break;
        case 55:
            result[7]++;
            break;
        case 56:
            result[8]++;
            break;
        case 57:
            result[9]++;
            break;
        }
    }
    for (int i = 0; i < 10;i++){
        if(result[i]!=0){
            printf("%d:%d\n", i, result[i]);
        }
    }
}