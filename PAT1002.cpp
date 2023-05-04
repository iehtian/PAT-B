#include <iostream>
#include <time.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char c[101];
    scanf("%s", c);
    int n = strlen(c);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (int)c[i]-48;
    }
    char result[101];
    // memset(result, -1, sizeof(result));
    sprintf(result, "%d", sum);
    int m = sizeof(result);
    for (int i = 0; result[i]!='\0'; i++)
    {
        if(result[i]-48==1){
            printf("yi");
        }
        else if(result[i]-48==2){
            printf("er");
        }else if(result[i]-48==3){
            printf("san");
        }else if(result[i]-48==4){
            printf("si");
        }else if(result[i]-48==5){
            printf("wu");
        }else if(result[i]-48==6){
            printf("liu");
        }else if(result[i]-48==7){
            printf("qi");
        }else if(result[i]-48==8){
            printf("ba");
        }else if(result[i]-48==9){
            printf("jiu");
        } else if(result[i]-48==0){
            printf("ling");
        }
        if(result[i+1]!='\0')
            printf(" ");
    }
}