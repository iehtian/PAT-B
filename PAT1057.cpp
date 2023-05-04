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
using namespace std;
int main(){
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int res=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>=97&&s[i]<=122)
        {
            res += s[i] - 96;
        }
    }
    if(res==0){
        printf("0 0");
        return 0;
    }
        
    stack<int> st;
    for (int i = 0; res!=0; i++)
    {
        int yu = res % 2;
        st.push(yu);
        res = res / 2;
    }
    int m=st.size();
    int count0 = 0, count1 = 0;
    for (int i = 0; i < m; i++)
    {
        if(st.top()==0)
            count0++;
        else
            count1++;
        st.pop();
    }
    printf("%d %d", count0, count1);
}