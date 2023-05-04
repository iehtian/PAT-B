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
    queue<int> q;
    getchar();
    for (int i = 0; i < n; i++)
    {
        string s;
        
        getline(cin,s);
        int site=s.find('T');
        switch (s[site-2])
        {
        case 'A':
            q.push(1);
            break;
        case 'B':
            q.push(2);
            break;
        case 'C':
            q.push(3);
            break;
        case 'D':
            q.push(4);
            break;
        }
    }
    while (q.empty()!=true)
    {
        printf("%d", q.front());
        q.pop();
    }
    
}