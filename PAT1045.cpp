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
     int n;
     scanf("%d", &n);
     stack<int> st;
     int a[n] = {0}, b[n], count = 0, zuida = 0;
     long long zuixiao = 10000000000ll;
     for (int i = 0; i < n; i++)
     {
         int tem;
         scanf("%d", &tem);
         if(tem>zuida){
             zuida = tem;
             a[i] = 1;
         }
         st.push(tem);
     }
     for (int i = n-1; i >= 0; i--)
     {
        if (st.top()<zuixiao)
        {
             zuixiao = st.top();
            if(a[i]==1){
                b[count] = st.top();
                count++;
            }
        }
        st.pop();
     }
     if(count==0)
       printf("%d\n\n", count);
    else
        printf("%d\n", count);
     sort(b, b + count);
     for (int i = 0; i < count; i++)
     {
        if(i!=count-1)
            printf("%d ", b[i]);
        else
             printf("%d", b[i]);
     }
}