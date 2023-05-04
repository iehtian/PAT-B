#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream> 
using namespace std;
bool number(string s1){
    string s2 = s1;
    s2.erase(s2.begin() + 17);
    return s2.find_first_not_of("0123456789") == string::npos;
}
int main(){
    int n,num=0;
    scanf("%d", &n);
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string s1[n];
    string s2 = "10X98765432";
    for (int i = 0; i < n; i++)
    {
        bool tag=number(s[i]);
        if(tag==false){
            s1[num] = s[i];
            num++;
            continue;
        }
        int temp = ((s[i][0]-48) * 7 + (s[i][1]-48) * 9 + (s[i][2]-48) * 10 + 
        (s[i][3]-48) * 5 + (s[i][4]-48) * 8 + (s[i][5]-48) * 4 +(s[i][6]-48) * 2 + (s[i][7]-48) +(s[i][8]-48) * 6 + 
        (s[i][9]-48) * 3 + (s[i][10]-48) * 7 + (s[i][11]-48) * 9 + (s[i][12]-48) * 10 +(s[i][13]-48) * 5 + (s[i][14]-48) * 8 + 
        (s[i][15]-48) * 4 + (s[i][16]-48) * 2)%11;
        char c1 = s[i][17], c2 = s2[temp];
        if(c1!=c2){
            s1[num] = s[i];
            num++;
            continue;
        }
    }
    if (num==0)
    {
        printf("All passed");
        return 0;
    }
    
    for (int i = 0; i < num; i++)
    {
        cout << s1[i] << endl;
    }
    
}
