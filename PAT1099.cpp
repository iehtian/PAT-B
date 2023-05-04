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
bool judge(int n){
    if (n<=1)
    {
        return false;
    }
    
    if (n%2==0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i=i+2)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    scanf("%d", &n);
    
    if (judge(n)&&judge(n-6))
    {
        printf("Yes\n");
        printf("%d", n - 6);
        return 0;
    }
    else if (judge(n)&&judge(n+6)){
        printf("Yes\n");
        printf("%d", n + 6);
        return 0;
    }
    else
        printf("No\n");
    while (1)
    {
        n++;
        if (judge(n)&&judge(n+6))
        {
            printf("%d", n);
            return 0;
        }
        else if (judge(n)&&judge(n-6))
        {
            printf("%d", n );
            return 0;
        }
        
    }
}