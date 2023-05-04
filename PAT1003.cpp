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
#include<unordered_map>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(s.find_first_not_of("PAT")!=-1){
            printf("No\n");
            continue;
        }
        if (count(s.begin(),s.end(),'P')!=1||count(s.begin(),s.end(),'T')!=1)
        {
            printf("No\n");
            continue;
        }
        if (s.find("P")>s.find("T"))
        {
            printf("No");
            continue;
        }
        if (s.find("p")==s.length()-s.find(T))
        {
            /* code */
        }
        
    }
    
}