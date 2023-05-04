#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm> 
#include<iostream>
#include<map>
#include<set>
#include <sstream>
using namespace std;

int main(){
    map<int, string> mp1;
    mp1[0] = "tret";
    mp1[1] = "jan";
    mp1[2] = "feb";
    mp1[3] = "mar";
    mp1[4] = "apr";
    mp1[5] = "may";
    mp1[6] = "jun";
    mp1[7] = "jly";
    mp1[8] = "aug";
    mp1[9] = "sep";
    mp1[10] = "oct";
    mp1[11] = "nov";
    mp1[12] = "dec";
    mp1[13] = "tam";
    mp1[26] = "hel";
    mp1[39] = "maa";
    mp1[52] = "huh";
    mp1[65] = "tou";
    mp1[78] = "kes";
    mp1[91] = "hei";
    mp1[104] = "elo";
    mp1[117] = "syy";
    mp1[130] = "lok";
    mp1[143] = "mer";
    mp1[156] = "jou";
    map<string, int> mp2;
    mp2["tret"] = 0;
    mp2["jan"] = 1;
    mp2["feb"] = 2;
    mp2["mar"] = 3;
    mp2["apr"] = 4;
    mp2["may"] = 5;
    mp2["jun"] = 6;
    mp2["jly"] =7;
    mp2["aug"] = 8;
    mp2["sep"] = 9;
    mp2["oct"] = 10;
    mp2["nov"] = 11;
    mp2["dec"] = 12;
    mp2["tam"] = 13;
    mp2["hel"] = 26;
    mp2["maa"] = 39;
    mp2["huh"] = 52;
    mp2["tou"] = 65;
    mp2["kes"] = 78;
    mp2["hei"] = 91;
    mp2["elo"] = 104;
    mp2["syy"] = 117;
    mp2["lok"] = 130;
    mp2["mer"] = 143;
    mp2["jou"] = 156;
    int n;
    scanf("%d", &n);
    string s2;
    getline(cin, s2);
    for (int i = 0; i < n; i++)
    {
        string s;
        int tem=0;
        getline(cin, s);
        if(s.find_first_not_of("0123456789")==string::npos){
            std::stringstream stem;
            stem << s;
            stem >> tem;
            int da = tem / 13;
            da = da * 13;
            int db = tem % 13;
            if (da!=0&&db!=0)
            {
                cout << mp1[da]<<' '<<mp1[db]<<endl;
            }
            else if (da!=0&&db==0)
            {
                cout << mp1[da] << endl;
            }
            else{
                cout << mp1[db] << endl;
            }
           
        }
        else if (s[0]!=' ')
        {
            if(s.length()>5){
                 string s1 = s.substr(0, 3);
                 string s2 = s.substr(4, 7);
                 int da = mp2[s1] + mp2[s2];
                 cout << da << endl;
                 
            }
            else{
                string s1 = s.substr(0, 3);
                cout << mp2[s1]<<endl;
                
            }
        }
    }
}