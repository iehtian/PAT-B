#include <windows.h>
#include <iostream>
#include <iomanip>
#include <time.h>
#include <pthread.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int n;
    int time=0;
    scanf("%d", &n);
    while(n!=1){
        if (n%2==0)
        {
            n = n / 2;
        }
        else{
            n=(3*n+1)/2;
        }
        printf("%d\n", n);
        time++;
    }
    printf("%d", time);
}