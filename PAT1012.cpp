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
    int num[n],A1[n],A2[n],A3[n],A4[n],A5[n];
    int count1=0, count2=0, count3=0, count4=0, count5=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        if(num[i]%5==0){
            A1[count1] = num[i];
            count1++;
        }else if(num[i]%5==1){
            A2[count2] = num[i];
            count2++;
        }else if(num[i]%5==2){
            A3[count3] = num[i];
            count3++;
        }else if(num[i]%5==3){
            A4[count4] = num[i];
            count4++;
        }else if(num[i]%5==4){
            A5[count5] = num[i];
            count5++;
        }
    }
    int ans1 = 0,tag1=0;
    for (int i = 0; i < count1; i++)
    {
        if(A1[i]%2==0){
            ans1 = ans1 + A1[i];
            tag1 = 1;
        }
    }
    if(count1==0||tag1==0){
        printf("N ");
    }else
        printf("%d ", ans1);
    int ans2 = A2[0];
    for (int i = 1; i < count2; i++)
    {
        if(i%2==1){
            ans2 = ans2 - A2[i];
        }else{
            ans2 = ans2 + A2[i];
        }
    }
    if(count2==0){
        printf("N ");
    }else
        printf("%d ", ans2);
    if(count3==0)
        printf("N ");
        else
        printf("%d ", count3);
    double ans4,sum=0;
    for (int i = 0; i < count4; i++)
    {
        sum = sum + A4[i];
    }
    ans4 = sum / count4;
    if(count4==0){
        printf("N ");
    }else
        printf("%.1f ", ans4);
    sort(A5, A5 + count5);
    if(count5==0){
        printf("N");
    }
    else
        printf("%d", A5[count5 - 1]);
}
