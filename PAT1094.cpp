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
bool judgesu(long long n){
	if(n<2)
	   return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		   return 0;
	}
	return 1;
    }
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    string s;
    cin >> s;
    stringstream ss;
    for (int i = 0; i < n-m+1; i++)
    {
        string s2 = s.substr(i, m);
        ss << s2;
        long long tem;
        ss >> tem;
        // if (tem%2==0||tem==1)
        // {
        //     ss.clear();
        //     continue;
        // }
        if (judgesu(tem))
        {
            cout << setw(m) <<setfill('0')<< tem;
            return 0;
        }
        ss.clear();
    }
    printf("404");
}