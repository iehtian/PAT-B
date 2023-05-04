#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        if(a+b>c){
            printf("Case #%lld: true\n", i+1);
        }else{
            printf("Case #%lld: false\n", i+1);
        }
    }
    
}