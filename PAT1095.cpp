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
#include<unordered_map>
using namespace std;
struct kaosheng
{
    string id;
    int grade;
};
bool cmp(kaosheng k1,kaosheng k2){
    if (k1.grade<k2.grade)
    {
        return false;
    }
    else if (k1.grade==k2.grade)
    {
        if (k1.id>k2.id)
        {
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return true;
    }
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    kaosheng kao[n];
    for (int i = 0; i < n; i++)
    {
        cin >> kao[i].id >> kao[i].grade;
    }
    for (int i = 0; i < m; i++)
    {
        int j;
        scanf("%d", &j);
        switch (j)
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }
    }
    
}