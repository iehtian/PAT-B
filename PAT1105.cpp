#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
struct list
{
    int address, data, next;
};

int main(){
    int first1, first2, n;
    scanf("%d%d%d", &first1, &first2, &n);
    list l[100000];
    for (int i = 0; i < n; i++)
    {
        int address;
        scanf("%d", &address);
        l[address].address = address;
        scanf("%d%d", &l[address].data, &l[address].next);
    }
    vector<list> vec1, vec2;
    int i;
    for ( i = first1; l[i].next!=-1; i=l[i].next)
    {
        vec1.push_back(l[i]);
    }
    vec1.push_back(l[i]);
    for (i = first2; l[i].next != -1; i = l[i].next)
    {
        vec2.push_back(l[i]);
    }
    vec2.push_back(l[i]);
    int j = 0;
    if (vec1.size()<vec2.size())
    {
        swap(vec1, vec2);
    }
    reverse(vec2.begin(), vec2.end());
    vector<list> vec3;
    for (i = 0; i < vec1.size(); i++)
    {
        vec3.push_back(vec1[i]);
        if (i%2==1&&i!=0&&j!=vec2.size())
        {
            vec3.push_back(vec2[j]);
            j++;
        }
    }
    for (i = 0; i < vec3.size()-1; i++)
    {
        vec3[i].next = vec3[i + 1].address;
    }
    vec3[vec3.size() - 1].next = -1;
    for (i = 0; i < vec3.size()-1; i++)
    {
        printf("%05d %d %05d\n", vec3[i].address, vec3[i].data, vec3[i].next);
    }
    printf("%05d %d %d", vec3[vec3.size()-1].address, vec3[vec3.size()-1].data, vec3[vec3.size()-1].next);
    
}