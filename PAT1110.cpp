#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
struct list
{
    int address, data, next;
    bool operator==(const int &address){
        return (this->address==address);
    };
};

int main(){
    int first, n, k;
    scanf("%d%d%d", &first, &n, &k);
    vector<list> vec;
    list l[100000];
    for (int i = 0; i < n; i++)
    {
        int address;
        scanf("%d", &address);
        l[address].address = address;
        scanf("%d%d", &l[address].data, &l[address].next);
    }
    int i;
    for(i=first;l[i].next!=-1;i=l[i].next)	//找出这条合理的链表，并把有效节点加入vector中
		vec.push_back(l[i]);
    vec.push_back(l[i]);
    reverse(vec.begin(), vec.end());
    int len = vec.size();
    int t = len % k;
    reverse(vec.begin(), vec.begin() + t);
    for (int i = t; i < len; i+=k)
    {
        reverse(vec.begin() + i, vec.begin() + i + k);
    }
    for (int i = 0; i < len-1; i++)
    {
        vec[i].next = vec[i + 1].address;
    }
    vec[len-1].next = -1;
    for (int i = 0; i < len-1; i++)
    {
        printf("%05d %d %05d\n", vec[i].address, vec[i].data, vec[i].next);
    }
    printf("%05d %d %d", vec[len-1].address, vec[len-1].data, vec[len-1].next);
}