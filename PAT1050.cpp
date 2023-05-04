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
int findm(int N){
    for (int i = sqrt(N)+1; i <= N; i++)
    {
        if (N%i==0) return i;
    }
}
int main(){
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + N);
    int m,n,mi=100000;
    
    if (sqrt(N)*sqrt(N)==N)
        m = n = sqrt(N);
    else{
         m = findm(N);
        n = N / m;
    }
    int b[m][n],c=0;
    int time = 1;
    while (1)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[i][j] = a[c];
                c++;
            }
            break;
        }
        for (int j = 0; j < n; j++)
        {
            for (int i = time; i < m; i++)
            {
                b[i][j] = a[c];
                c++;
            }
            n--;
            break;
        }
        for (int i = m; i >=0; i--)
        {
            for (int j = n; j > 0; j--)
            {
                b[i][j] = a[c];
                c++;
            }
            m--;
            n--;
            break;
        }
        for (int j = time-1; j <n ; j++)
        {
            for (int i = m; i >= time; i--)
            {
                b[i][j] = a[c];
                c++;
            }
            break;
        }
        time++;
    }
    
}