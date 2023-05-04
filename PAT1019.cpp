#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    char s[6];
    scanf("%s", s);
    while (strlen(s)<4)
        {
            int a = strlen(s);
            s[a] = 48;
        }
    char tem1[6], tem2[6];
    strcpy(tem1, s);
    strcpy(tem2, s);
    while (1)
    {
        sort(tem1, tem1 + strlen(tem1));//从小到大排
        sort(tem2, tem2 + strlen(tem2),greater<int>());//从大到小排
        int a, b;
        sscanf(tem1, "%d", &a);
        sscanf(tem2, "%d", &b);
        char tem3[6];
        sprintf(tem3, "%d", b - a);
        while (strlen(tem3)<4)
        {
            int a = strlen(tem3);
            tem3[a] = 48;
        }
        printf("%04d - %04d = %04d",b,a,b-a);
        // printf("%04d", b - a);
        if(b-a==0)
            return 0;
        strcpy(tem2, tem3);
        strcpy(tem1, tem3);
        if(b-a!=6174){
            printf("\n");
        }
        else
            break;
    }
}