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
using namespace std;
int main(){
    set<int> se;
    int n;
    scanf("%d", &n);
    char c;
    int tem = 0;
    getchar();
    for (int i = 0; c!='\n'; i++)
    {
        c = getchar();
        if (c==' '||c=='\n')
        {
            se.insert(tem);
            tem = 0;
            continue;
        }
        tem += c - 48;
    }
    int siz = se.size();
    int i = 0;
    printf("%d\n", siz);
    for (set<int>::iterator it=se.begin(); it!=se.end(); it++,i++)
    {
        if (i<siz-1)
        {
            printf("%d ", *it);
        }
        else
            printf("%d", *it);
    }
    
}