#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int i = 0, j = 0;
    while(i<s2.length()){
        int num=s1.find(s2[i]);
        if (num!=-1)
        {
            s1.erase(s1.begin() + num);
            s2.erase(s2.begin() + i);
        }
        else{
            i++;
        }
    }
    if (s2.length()!=0)
    {
        printf("No %d", s2.length());
    }
    else if(s2.length()==0){
        printf("Yes %d", s1.length());
    }
    
}