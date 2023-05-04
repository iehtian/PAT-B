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
    int n;
    scanf("%d", &n);
    int mi = 1001;
    for (int i = 0; i < n; i++)
    {
        int tem;
        scanf("%d", &tem);
        mi = min(tem, mi);
    }
    int ma = -1;
    for (int i = 0; i < n; i++)
    {
        int tem;
        scanf("%d", &tem);
        ma = max(tem, ma);
    }
    if (mi>ma)
    {
        printf("Yes %d", mi - ma);
    }
    else{
        printf("No %d", ma - mi + 1);
    }
}