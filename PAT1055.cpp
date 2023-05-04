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
#include<deque>
using namespace std;
struct stu
{
    string name;
    int high;
};
bool cmp(stu s1,stu s2){
    if (s1.high<s2.high)
    {
        return true;
    }
    else if (s1.high==s2.high)
    {
        if (s1.name>s2.name)
        {
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
    
    
}
using namespace std;
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int meipairen = n / k;
    stu st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].name >> st[i].high;
    }
    sort(st, st + n, cmp);
    deque<string> de;
    int count = n-1;
    for (int i = k; i >=1; i--)
    {
        if (i==k)
        {
            meipairen = n / k + n % k;
        }
        else{
            meipairen = n / k;
        }
        de.clear();
        for (int j = 0; j < meipairen; j++)
        {
            if (j==0)
            {
                de.push_front(st[count].name);
                count--;
                continue;
            }
            if (j%2==1)
            {
                de.push_front(st[count].name);
            }
            else{
                de.push_back(st[count].name);
            }
            count--;
        }
        cout << de.front();
        de.pop_front();
        for (int j = 1; j < meipairen; j++)
        {
            cout << " " << de.front();
            de.pop_front();
        }
        cout << endl;
    }
    
}