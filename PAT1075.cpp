#include<algorithm>
#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
struct list
{
    int address, data, next;
};

int main(){
    int first, n, k;
    scanf("%d%d%d", &first, &n, &k);
    list l[100000];
    vector<list> vec1,vec2,vec3;
    for (int i = 0; i < n; i++)
    {
        int address;
        scanf("%d", &address);
        l[address].address = address;
        scanf("%d%d", &l[address].data, &l[address].next);
    }
    int i;
    for ( i = first; l[i].next!=-1; i=l[i].next)
    {
        if (l[i].data<0)
        {
            vec1.push_back(l[i]);
        }
        else if (l[i].data>=0&&l[i].data<=k)
        {
            vec2.push_back(l[i]);
        }
        else{
            vec3.push_back(l[i]);
        } 
    }
    if (l[i].data<0)
    {
        vec1.push_back(l[i]);
    }
    else if (l[i].data>=0&&l[i].data<=k)
    {
        vec2.push_back(l[i]);
    }
    else{
        vec3.push_back(l[i]);
    }
    vector<list> res;
    res.insert(res.end(), vec1.begin(), vec1.end());
    res.insert(res.end(), vec2.begin(), vec2.end());
    res.insert(res.end(), vec3.begin(), vec3.end());
    for (int i = 0; i < res.size()-1; i++)
    {
        res[i].next = res[i + 1].address;
    }
    res[res.size() - 1].next = -1;
    for (int i = 0; i < res.size()-1; i++)
    {
        printf("%05d %d %05d\n", res[i].address, res[i].data, res[i].next);
    }
    printf("%05d %d -1", res[res.size() - 1].address, res[res.size() - 1].data);
}