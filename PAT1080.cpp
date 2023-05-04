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
using namespace std;
struct student
{
    string name;
    int zaixian;
    int qizhong=-1;
    int qimo=-1;
    double zongping;
    bool operator == (const string s){
        if (s==this->name)
        {
            /* code */
            return true;
        }
        else
            return false;
        }
};
bool cmp(student s1,student s2){
    if (s1.zongping>s2.zongping)
    {
        return true;
    }
    else if (s1.zongping==s2.zongping)
    {
        if (s1.name<s2.name)
        {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}
int main(){
    int n, m, p,a;
    scanf("%d%d%d", &n, &m, &p);
    unordered_map<string,student> stu;
    vector<student> vec;
    string s;
    student st;
    for (int i = 0; i < n; i++)
    {

        cin >> s;
        scanf("%d",&a);
        if (a<200)
        {
            continue;
        }
        st.name = s;
        st.zaixian = a;
        stu.insert(make_pair(s, st));
    }
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        scanf("%d",&a);
        unordered_map<string, student>::iterator it = stu.find(s);
        if (it!=stu.end())
        {
            it->second.qizhong = a;
        }
    }
    for (int i = 0; i < p; i++)
    {
        cin >> s;
        scanf("%d",&a);
        unordered_map<string, student>::iterator it = stu.find(s);
        if (it!=stu.end())
        {
            it->second.qimo = a;
        }
    }
    int q = stu.size();
    for (unordered_map<string, student>::iterator it=stu.begin(); it!=stu.end(); it++)
    {
        if (it->second.qimo>=it->second.qizhong&&it->second.qimo>=60)
        {
            it->second.zongping = it->second.qimo;
            vec.push_back(it->second);
        }
        else if (it->second.qimo<it->second.qizhong&&round((double)it->second.qizhong*0.4+(double)it->second.qimo*0.6)>=60)
        {
            it->second.zongping = round((double)it->second.qizhong * 0.4 + (double)it->second.qimo * 0.6);
            vec.push_back(it->second);
        }
        
        
        // if (stu[i].qimo>=stu[i].qizhong&&stu[i].qimo>=60)
        // {
        //     stu[i].zongping = stu[i].qimo;
        // }
        // else if(stu[i].qimo<stu[i].qizhong&&round((double)stu[i].qizhong * 0.4 + (double)stu[i].qimo * 0.6)>=60)
        // {
        //     stu[i].zongping = round((double)stu[i].qizhong * 0.4 + (double)stu[i].qimo * 0.6);
        // }
        // else{
        //     stu.erase(stu.begin() + i);
        //     q--;
        //     i--;
        // }
    }
    sort(vec.begin(), vec.end(), cmp);
     q = vec.size();
    for (int i = 0; i < q; i++)
    {
        cout << vec[i].name;
        printf(" %d %d %d %.0f\n", vec[i].zaixian, vec[i].qizhong, vec[i].qimo, vec[i].zongping);
    }
    
}