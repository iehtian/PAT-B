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
bool isnumber(string s){
    return s.find_first_not_of("0123456789") == string::npos;
}
int main(){
    string s;
    int n,count=0;
    double res=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int a = s.find('.');
        int k;
        if (s[0]=='-')
        {
            if (s.length()==1)
            {
                cout << "ERROR: " << s << " is not a legal number" << endl;
                continue;
            }
            k = 1;
        }
        else{
            k = 0;
        }
        
        if (a!=-1)
        {
            if (isnumber(s.substr(k,a-k))&&s.substr(a+1,s.length()-a-1).length()<=2&&s.substr(a+1,s.length()-a-1).length()>=0
            &&isnumber(s.substr(a+1,s.length()-a-1)))
            {
                double fa;
                std::stringstream ss1,ss2;
                ss1 << s;
                ss1 >> fa;
                if (fa<=1000&&fa>=-1000)
                {
                    res += fa;
                    count++;
                }
                else{
                     cout << "ERROR: " << s << " is not a legal number" << endl;
                    continue;
                }
                
            }
            else{
                cout << "ERROR: " << s << " is not a legal number" << endl;
                continue;
            }
        }
        else{
            if (isnumber(s.substr(k,s.length()-k)))
            {
                double fa;
                std::stringstream ss1,ss2;
                ss1 << s;
                ss1 >> fa;
                if (fa<=1000&&fa>=-1000)
                {
                    res += fa;
                    count++;
                }
                else{
                    cout << "ERROR: " << s << " is not a legal number" << endl;
                    continue;
                }
                
            }
            else{
                cout << "ERROR: " << s << " is not a legal number" << endl;
                continue;
            }
            
        }
    }
    if (count==0)
    {
        printf("The average of 0 numbers is Undefined");
        return 0;
    }
    res = res / (double)count;
    if (count==1)
    {
        printf("The average of %d number is %.2lf", count, res);
        return 0;
    }
    
    printf("The average of %d numbers is %.2lf", count, res);
}