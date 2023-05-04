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
struct sheji
{
    string id;
    int juli;
};
bool cmp(sheji s1,sheji s2){
    return s1.juli < s2.juli;
}
int main(){
    int n;
    scanf("%d", &n);
    sheji she[n];
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> she[i].id >> x >> y;
        she[i].juli = pow(x, 2) + pow(y, 2);
    }
    sort(she, she + n, cmp);
    cout << she[0].id << ' ' << she[n - 1].id;
}