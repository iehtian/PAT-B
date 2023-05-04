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
int measure(int x, int y)
{	
	int z = y;
	while(x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	}
	return z;
}
int main(){
    int a, b, c, d, e;
    double fa, fb;
    scanf("%d/%d %d/%d %d", &a, &b,&c,&d,&e);
    fa = (double)a / (double)b;
    fb = (double)c / (double)d;
    string s;
    if (fa>fb)
    {
        swap(fa, fb);
    }
    
    int i = 0;
    double fc=-1;
    for (; fc<fb ; i++)
    {
        fc = (double)i / (double)e;
        if (fc>=fb)
        {
            break;
        }
        if (fc<=fa)
        {
            continue;
        }
        
        if(fc>fa&&measure(i,e)==1){
            string s2;
            std::stringstream ss1,ss2;
            ss1 << i;
            ss1 >> s2;
            s += s2;
            s += '/';
            ss2 << e;
            ss2 >> s2;
            s += s2;
            s += ' ';
        }
        
    }
    s.erase(s.begin() + s.length() - 1);
    cout << s;
}