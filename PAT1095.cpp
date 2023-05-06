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
struct kaosheng
{
    string grade,kaochang,date,bianhao;
    int score;
};
bool cmp(kaosheng k1,kaosheng k2){
    if (k1.score<k2.score)
    {
        return false;
    }
    else if (k1.score==k2.score)
    {
        if (k1.grade+k1.kaochang+k1.date+k1.bianhao>k2.grade+k2.kaochang+k2.date+k2.bianhao)
        {
            return false;
        }
        else
            return true;
    }else{
        return true;
    }
}
bool cmp1(kaosheng k1,kaosheng k2){
    return k1.grade < k2.grade;
}
bool cmp2(pair<string,int> a, pair<string,int> b) {
	if (a.second < b.second)
    {
        return false;
    }
    else if (a.second==b.second)
    {
        if (a.first>b.first)
        {
            return false;
        }
        else
            return true;
    }
    else
        return true;
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    kaosheng kao[n];
    int countA = 0,countB = 0, countT = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s[0]=='A')
        {
            countA++;
        }
        else if (s[0]=='B')
        {
            countB++;
        }
        else{
            countT++;
        }
        kao[i].grade = s[0];
        kao[i].kaochang = s.substr(1, 3);
        kao[i].date = s.substr(4, 6);
        kao[i].bianhao = s.substr(10, 3);
        cin >> kao[i].score;
    }
    sort(kao, kao + n, cmp1);
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        if (k==1)
        {
            string grade;
            cin >> grade;
            cout << "case " << i + 1 << ": " << k << " " << grade << endl; 
            if (grade=="A")
            {
                if (countA==0)
                {
                    printf("NA\n");
                    continue;
                }
                sort(kao, kao + countA, cmp);
                for (int j = 0; j < countA; j++)
                {
                    cout << kao[j].grade + kao[j].kaochang + kao[j].date + kao[j].bianhao << " " << kao[j].score << endl;
                }
            }
            else if (grade=="B")
            {
                if (countB==0)
                {
                    printf("NA\n");
                    continue;
                }
                sort(kao+countA, kao + countA+countB, cmp);
                for (int j = countA; j < countA+countB; j++)
                {
                    cout << kao[j].grade + kao[j].kaochang + kao[j].date + kao[j].bianhao << " " << kao[j].score << endl;
                }
            }
            else if (grade=="T")
            {
                if (countT==0)
                {
                    printf("NA\n");
                    continue;
                }
                sort(kao+countB+countA, kao + countA+countB+countT, cmp);
                for (int j = countB+countA; j < countA+countB+countT; j++)
                {
                    cout << kao[j].grade + kao[j].kaochang + kao[j].date + kao[j].bianhao << " " << kao[j].score << endl;
                }
            }
            else
                printf("NA\n");
        }
        else if (k==2)
        {
            string kaochang;
            cin >> kaochang;
            cout << "case " << i + 1 << ": " << k << " " << kaochang << endl; 
            int num = 0,score=0;
            for (int j = 0; j < n; j++)
            {
                if (kao[j].kaochang==kaochang)
                {
                    num++;
                    score += kao[j].score;
                }
            }
            if (num==0)
            {
                printf("NA\n");
            }
            else{
                printf("%d %d\n", num, score);
            }
        }
        else if (k==3)
        {
            string date;
            cin >> date;
            cout << "case " << i + 1 << ": " << k << " " << date << endl;
            unordered_map<string, int> mp;
            for (int j = 0;  j< n; j++)
            {
                if (kao[j].date==date)
                {
                    unordered_map<string, int>::iterator it = mp.find(kao[j].kaochang);
                    if (it!=mp.end())
                    {
                        it->second++;
                    }
                    else{
                        mp[kao[j].kaochang] = 1;
                    }
                }
            }
            if (mp.size()==0)
            {
                printf("NA\n");
                continue;
            }
            vector< pair<string,int> > vec;
            for(unordered_map<string,int>::iterator it = mp.begin(); it != mp.end(); it++){
                vec.push_back( pair<string,int>(it->first,it->second) );
            }
            sort(vec.begin(),vec.end(),cmp2);
            for (int j = 0; j < vec.size(); j++)
            {
                cout << vec[j].first << " " << vec[j].second << endl;
            }
        }
        else{
            string s;
            cin >>s;
            cout << "case " << i + 1 << ": " << k << " " << s << endl;
            printf("NA\n");
        }
        
        
    }
    
}