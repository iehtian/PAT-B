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
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d" , &m);
        for (int j = 1; i <= sqrt(m); j++)
        {
            if (m%j==0)
            {
                vec.push_back(j);
                if (j!=m/j)
                {
                    vec.push_back(m / j);
                }
            }
        }
        if (vec.size()<4)
        {
            printf("No");
            continue;
        }
        
        
        
    }
    
}