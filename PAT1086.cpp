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
    int n, m;
    scanf("%d%d", &n, &m);
    int a = n * m;
    std::stringstream ss;
    ss << a;
    string s;
    ss >> s;
    string::reverse_iterator it = s.rbegin();
    int tag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (tag==0&&it[i]=='0')
        {
            continue;
        }
        tag = 1;
        cout << it[i];
    }
    
}