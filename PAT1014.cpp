#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
using namespace std;
int main(){
    string a,b,c,d;
    cin >> a >> b >> c >> d;
    int counta = a.length();
    int countb = b.length();
    int countc = c.length();
    int countd = d.length();
    int count = min(counta, countb);
    char ans1,ans2;
    for (int i = 0,tag1=0,tag2=0; i < count&&tag2==0; i++)
    {
        if(a[i]==b[i]&&((a[i]>=65&&a[i]<=78)||(a[i]>=48&&a[i]<=57))&&tag1==1){
            ans2 = a[i];
            tag2 = 1;
        }
        if(a[i]==b[i]&&a[i]>=65&&a[i]<=71&&tag1==0){
            ans1 = a[i];
            tag1 = 1;
        }
    }
    switch (ans1)
    {
    case 'A':
        printf("MON ");
        break;
    case 'B':
        printf("TUE ");
        break;
    case 'C':
        printf("WED ");
        break;
    case 'D':
        printf("THU ");
        break;
    case 'E':
        printf("FRI ");
        break;
    case 'F':
        printf("SAT ");
        break;
    case 'G':
        printf("SUN ");
        break;
    }
    if((int)ans2>=48&&(int)ans2<=57){
        printf("0%d:", (int)ans2 - 48);
    }else
        printf("%d:", (int)ans2 - 65 + 10);
    int ans3;
    count = min(countc, countd);
    for (int i = 0,tag=0; i < count&&tag==0; i++)
    {
        if(c[i]==d[i]&&((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122))){
            ans3 = i;
            tag = 1;
        }
    }
    if(ans3<10){
        printf("0%d", ans3);
    }else
        printf("%d", ans3);
}