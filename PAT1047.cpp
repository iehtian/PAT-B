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
int main(){
    map<int, int> mp;
    int n,resbian=0,rescheng=-1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int tem1,tem2,tem3;
        scanf("%d-%d %d", &tem1, &tem2, &tem3);
        if(mp.find(tem1)==mp.end()){
            mp[tem1] = tem3;
        }else{
            mp[tem1] += tem3;
        }
        if (mp[tem1]>rescheng)
        {
            resbian = tem1;
            rescheng = mp[tem1];
        }
        
    }
    printf("%d %d", resbian, rescheng);
}