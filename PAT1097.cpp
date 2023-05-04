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
#include<deque>
using namespace std;
int main(){
    int n, k, x;
    scanf("%d%d%d", &n, &k, &x);
    vector<deque<int>> vec;
    int m = 1;
    for (int i = 0; i < n; i++)
    {
        deque<int> dq;
        for (int j = 0; j < n; j++)
        {
            int tem;
            scanf("%d", &tem);
            if (j<n-m&&i%2==0)
            {
                dq.push_back(tem);
            }
            else if (j>=n-m&&i%2==0)
            {
                dq.push_front(x);
            }
            else
            {
                dq.push_back(tem);
            }
                
        }
        vec.push_back(dq);
        if (m<k&&i%2==0)
        {
            m++;
        }
        else if (m==k&&i%2==0)
        {
             m = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int tem = 0;
        for (int j = 0; j < n; j++)
        {
             tem += vec[j].front();
             vec[j].pop_front();
        }
        if (i!=n-1)
        {
             printf("%d ", tem);
        }
        else
             printf("%d", tem);
    }
    
}