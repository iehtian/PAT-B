#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
#include <sstream>
using namespace std;
struct huaquan
{
    int jiahan;
    int jiahua;
    int yihan;
    int yihua;
};

int main(){
    int n;
    int jiahe = 0, yihe = 0;
    scanf("%d", &n);
    huaquan hua[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d", &hua[i].jiahan, &hua[i].jiahua, &hua[i].yihan, &hua[i].yihua);
        if(hua[i].jiahua==hua[i].jiahan+hua[i].yihan&&hua[i].yihua!=hua[i].jiahan+hua[i].yihan){
            yihe++;
        }
        else if(hua[i].jiahua!=hua[i].jiahan+hua[i].yihan&&hua[i].yihua==hua[i].jiahan+hua[i].yihan){
            jiahe++;
        }
    }
    printf("%d %d", jiahe, yihe);
}