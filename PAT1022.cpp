#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    int a, b, d;
    scanf("%d%d%d", &a, &b, &d);
    int c = a + b;
    if(c==0){
        printf("0");
        return 0;
    }
    char s[50];
    memset(s, '\0', 50);
    int i = 0;
    while (c>=pow(d,i))
    {
        i++;
    }
    int m = i-1;
    for ( i = m; i >= 0; i--)
    {
        // int tem2 = pow(d, i);
        // int tem = c / (int)pow(d, i);
        s[m - i] = c / (int)pow(d, i)+48;
        c = c % (int)pow(d, i);
    }
    printf("%s", s);
}