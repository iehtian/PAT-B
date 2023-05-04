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
    int n;
    set<int> se;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        se.insert(i / 2 + i / 3 + i / 5);
    }
    printf("%d", se.size());
}