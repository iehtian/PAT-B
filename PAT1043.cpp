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
    string s1;
    cin >> s1;
    int i = 0;
    while (i<s1.length())
    {
        if (s1[i]=='P'||s1[i]=='A'||s1[i]=='T'||s1[i]=='e'||s1[i]=='s'||s1[i]=='t')
        {
            i++;
        }else{
            s1.erase(s1.begin() + i);
        }
    }
    while (s1.length()!=0)
    {
        if(s1.find('P')!=string::npos){
            printf("P");
            s1.erase(s1.begin() + s1.find('P'));
        }
        if(s1.find('A')!=string::npos){
             printf("A");
            s1.erase(s1.begin() + s1.find('A'));
        }
        if(s1.find('T')!=string::npos){
             printf("T");
            s1.erase(s1.begin() + s1.find('T'));
        }
        if(s1.find('e')!=string::npos){
             printf("e");
            s1.erase(s1.begin() + s1.find('e'));
        }
        if(s1.find('s')!=string::npos){
             printf("s");
            s1.erase(s1.begin() + s1.find('s'));
        }
        if(s1.find('t')!=string::npos){
             printf("t");
            s1.erase(s1.begin() + s1.find('t'));
        }
    }
}