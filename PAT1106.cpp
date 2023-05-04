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
#include<unordered_set>
#include<iomanip>
using namespace std;
int main(){
    int a[1000]={0};
    a[0] = 2;
    a[2] = 1;
    a[3] = 9;
    int n;
    scanf("%d", &n);
    if (n<=4)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
        
    }
    else{
        for (int i = 4; i < n; i++)
        {
            a[i] = (a[i - 1] + a[i - 2] + a[i - 3] + a[i - 4]) % 10;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
        
    }
}