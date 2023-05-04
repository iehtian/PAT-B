#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    int n,n2;
    char c,c1;
    scanf("%d%c%c", &n, &c1,&c);
    if (n%2==0)
    {
        n2 = n / 2;
    }else
    {
        n2 = n / 2 + 1;
    }
    for (int i = 0; i <n2; i++)
    {
        for (int j = 0; j< n; j++)
        {
            if(i==0||i==n2-1){
                printf("%c", c);
            }
            else{
                if (j==0||j==n-1)
                {
                    printf("%c",c);
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    
    
}