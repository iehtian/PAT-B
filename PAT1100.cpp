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
#include<unordered_map>
#include<iomanip>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    unordered_map<string,int> vec1;
    for (int i = 0; i < n; i++)
    {
        string tem;
        cin >> tem;
        vec1.insert(make_pair(tem,i));
    }
    scanf("%d", &n);
    string b = "99999999",c="99999999";
    string xiaoyoujieguo,laibinjieguo;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string tem;
        cin >> tem;
        unordered_map<string,int>::iterator it = vec1.find(tem);
        if (it!=vec1.end())
        {
            count++;
            if (tem.substr(6,8)<b)
            {
                xiaoyoujieguo = tem;
                b = tem.substr(6, 8);
            }
        }
        if (tem.substr(6,8)<c&&count==0)
            {
                laibinjieguo = tem;
                c = tem.substr(6, 8);
            }
    }
    cout << count << endl;
    if (count==0)
    {
        cout << laibinjieguo << endl;
    }
    else{
        cout << xiaoyoujieguo << endl;
    }
}