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
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d", &k);
        string s;
        std::stringstream ss;
        ss << k;
        ss >> s;
        int len = s.length();
        int jian = pow(k, 2);
        for (int j = 1; j < 10; j++)
        {
            int ce = j * jian;
            string s2;
            std::stringstream ss2;
            ss2 << ce;
            ss2 >> s2;
            string s1 = s2.substr(s2.length() - len, len);
            if (s==s1)
            {
                printf("%d %d\n", j, ce);
                break;
            }
            if (j==9)
            {
                printf("No\n");
            }
            
        }
        
    }
    
}