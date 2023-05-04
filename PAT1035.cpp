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
int main(){
    vector<int> dai, cha;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int tem;
        scanf("%d", &tem);
        dai.push_back(tem);
    }
    for (int i = 0; i < n; i++)
    {
        int tem;
        scanf("%d", &tem);
        cha.push_back(tem);
    }
    int tag = 0;
    vector<int> insertion(dai), merge(dai);
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >=1 ; j--)
        {
            if (insertion[j]<insertion[j-1])
            {
                swap(insertion[j], insertion[j - 1]);
            }
        }
        if (tag==1)
        {
            break;
        }
        if (insertion==cha)
        {
            printf("Insertion Sort\n");
            tag = 1;
        }
    }
    int lun=2;
    int tag1 = 0;
    while (lun<n*2)
    {
        for (int i = 0;; i+=lun)
        {
            if (n-i<=lun)
            {
                sort(merge.begin() + i, merge.begin()+n);
                lun = lun * 2;
                break;
            }
            sort(merge.begin() + i, merge.begin() + i + lun);
        }
        if (tag1==1)
        {
            break;
        }
        if (merge==cha)
        {
            printf("Merge Sort\n");
            tag1 = 1;
        }

    }
    if (tag==1)
    {
        printf("%d", insertion[0]);
        for (int i = 1; i < n; i++)
        {
            printf(" %d", insertion[i]);
        }
    }
    else if (tag1==1)
    {
        printf("%d", merge[0]);
        for (int i = 1; i < n; i++)
        {
            printf(" %d", merge[i]);
        }
    }
}