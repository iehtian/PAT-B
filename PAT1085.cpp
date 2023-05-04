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
struct danwei
{
    string danweimin;
    int fenshu;
    int renshu;
    int mingci;
};
bool cmp(danwei w1,danwei w2){//false代表换
    if (w1.fenshu>w2.fenshu)
    {
        return true;
    }else if(w1.fenshu==w2.fenshu){
        if (w1.renshu<w2.renshu)
        {
            return true;
        }
        else if(w1.renshu==w2.renshu){
            if (w1.danweimin<w2.danweimin)
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
    else{
        return false;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    map<string, int> mpren;
    map<string, double> mpfen;
    for (int i = 0; i < n; i++)
    {
        string zhun, school;
        double score;
        cin >> zhun >> score >> school;
        transform(school.begin(), school.end(), school.begin(), ::tolower);
        map<string, int>::iterator it = mpren.find(school);
        if (it!=mpren.end())
        {
            switch (zhun[0])
            {
            case 'B':
                mpfen[school] += score/1.5;
                break;
            case 'A':
                mpfen[school] += score;
                break;
            case 'T':
                mpfen[school] += score*1.5;
                break;
            }
            mpren[school]++;
        }
        else{
            switch (zhun[0])
            {
            case 'B':
                mpfen[school] = score / 1.5;
                break;
            case 'A':
                mpfen[school] = score ;
                break;
            case 'T':
                mpfen[school] = score * 1.5;
                break;
            }
            mpren[school] = 1;
        }
        
    }
    map<string, int>::iterator itren = mpren.begin();
    map<string, double>::iterator itfen = mpfen.begin();
    danwei dan[mpren.size()];
    int shangfen = -1,shangming=-1;
    for (int i=0; itren !=mpren.end(); itren++,itfen++,i++)
    {
        dan[i].fenshu = itfen->second;
        dan[i].renshu = itren->second;
        dan[i].danweimin = itren->first;
    }
    int m = mpfen.size();
    sort(dan, dan + m, cmp);
    printf("%d\n", mpren.size());
    for (int i = 0; i < mpren.size(); i++)
    {
        if (dan[i].fenshu==shangfen)
        {
            dan[i].mingci = shangming;
        }
        else{
            dan[i].mingci = i + 1;
            shangming = dan[i].mingci;
            shangfen = dan[i].fenshu;
        }
        cout << dan[i].mingci << ' ' << dan[i].danweimin << ' ' << dan[i].fenshu << ' ' << dan[i].renshu << endl;
    }
    
}