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
        for (int j = 1; j <= m; j++)
        {
            if (m%j==0)
            {
                vec.push_back(j);
            }
        }
        if (vec.size()<4)
        {
            printf("No\n");
            continue;
        }
        int tag = 0;
        for (int a = 0; a < vec.size()-3&&tag==0; a++)
        {
            for (int b = a+1; b < vec.size()-2&&tag==0; b++)
            {
                for (int c = b+1; c < vec.size()-1&&tag==0; c++)
                {
                    for (int d = c+1; d < vec.size()&&tag==0; d++)
                    {
                        if ((vec[a]+vec[b]+vec[c]+vec[d])%m==0)
                        {
                            printf("Yes\n");
                            tag = 1;
                        }
                        
                    }
                    
                }
                
            }
            
        }
        if (tag==0)
        {
            printf("No\n");
        }
        vec.clear();
        tag = 0;
    }
    
}