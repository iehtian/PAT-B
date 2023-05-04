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
struct juanzi
{
    string id;
    int danjia;
    int renshu;
    int zongjia;
};
bool cmp1(juanzi j1,juanzi j2){
    return j1.renshu > j2.renshu;
}
bool cmp2(juanzi j1,juanzi j2){
    return j1.zongjia > j2.zongjia;
}
int main(){
    int n;
    scanf("%d", &n);
    juanzi juan[n];
    for (int i = 0; i < n; i++)
    {
        cin >> juan[i].id >> juan[i].danjia >> juan[i].renshu;
        juan[i].zongjia = juan[i].danjia * juan[i].renshu;
    }
    sort(juan, juan + n, cmp1);
    cout << juan[0].id << ' ' << juan[0].renshu << endl;
    sort(juan, juan + n, cmp2);
    cout << juan[0].id << ' ' << juan[0].zongjia << endl;
}