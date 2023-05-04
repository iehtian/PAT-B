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
int main(){
    int n,m;
    scanf("%d%d", &n,&m);
    vector<int> vec;
    for (int i = 0; i < m; i++)
    {
        int tem;
        scanf("%d", &tem);
        vec.push_back(tem);
    }
    int countren = 0, countwu = 0;
    for (int i = 0; i < n; i++)
    {
        string name;
        int num;
        cin >> name >> num;
        int tag = 0;
        vector<int> ve;
        for (int j = 0; j < num; j++)
        {
            int wu;
            scanf("%d", &wu);
            vector< int >::iterator k = find(vec.begin(), vec.end(), wu);
            if (k!=vec.end())
            {
                tag = 1;
                countwu++;
                ve.push_back(*k);
            }
        }

        if (tag==1)
        {
            cout << name << ":";
            countren++;
            for (int j = 0; j < ve.size(); j++)
            {
                printf(" %04d", ve[j]);
            }
            cout << endl;
        }
    }
    cout << countren << " " << countwu;
}