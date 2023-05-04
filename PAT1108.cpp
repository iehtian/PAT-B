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
int main(){
    string s;
    getline(cin, s);
    int tag1 = 0, tag2 = 0, tag3 = 0, tag4 = 0, tag5 = 0, tag6 = 0;
    while (1)
    {
       
        if(s.find("S")!=-1){
            printf("S");
            s.erase(s.begin()+s.find("S"));
        }
        else
            tag1 = 1;
        if(s.find('t')!=-1){
            printf("t");
            s.erase(s.begin()+s.find('t'));
        }
        else
            tag2 = 1;
        if(s.find('r')!=-1){
            printf("r");
            s.erase(s.begin()+s.find('r'));
        }
        else
            tag3 = 1;
        if(s.find('i')!=-1){
            printf("i");
            s.erase(s.begin()+s.find('i'));
        }
        else
            tag4 = 1;
        if(s.find('n')!=-1){
            printf("n");
            s.erase(s.begin()+s.find('n'));
        }
        else
            tag5 = 1;
        if(s.find('g')!=-1){
            printf("g");
            s.erase(s.begin()+s.find('g'));
        }
        else
            tag6 = 1;
        if (tag1==1&&tag2==1&&tag3==1&&tag4==1&&tag5==1&&tag6==1)
        {
            break;
        }
        
    }
    
}