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
bool jiehekongge(string danci[],string s[][7],int n){
    for (int i = 0; i < 7; i++)
    {
        danci[i] += s[n][i]+' ';
    }
}
bool jiehewu(string danci[],string s[][7],int n){
    for (int i = 0; i < 7; i++)
    {
        danci[i] += s[n][i];
    }
}
int main(){
    string s[26][7];
    for (int i = 0; i < 26; i++)
    {
    for (int j = 0; j < 7; j++)
        {
            cin >> s[i][j];
        }
    }
    string sen;
    string jieguo[7];
    getchar();
    getline(cin, sen);
    for (int i = 0; i < sen.length(); i++)
    {
        if (sen[i]>='A'&&sen[i]<='Z')
        {
            if (sen[i+1]>='A'&&sen[i+1]<='Z')
            {
                jiehekongge(jieguo, s,sen[i] - 65);
            }
            else if ((sen[i+1]<'A'||sen[i+1]>'Z'))
            {
                jiehewu(jieguo, s, sen[i] - 65);
            }
            
        }
        if((i==sen.length()-1||sen[i]<'A'||sen[i]>'Z')&&jieguo[0].length()!=0)
        {
            for (int j = 0; j < 7; j++)
            {
                cout << jieguo[j] << endl;
                jieguo[j].clear();
            }
            if (sen.substr(i+1,sen.length()-i).find_first_of("QWERTYUIOPLKJHGFDSAZXCVBNM")!=-1)
            {
                cout << endl;
            }
            
        } 
    }
}