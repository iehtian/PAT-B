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
int main(){
    string s;
    int n;
    cin >> s>>n;
    string ss = s.substr(s.length() - n, n) + s.substr(0, s.length() - n);
    stringstream sss,sss1;
    sss << ss;
    int tem;
    sss >> tem;
    sss1 << s;
    sss1 >> n;
    printf("%.2f", (double)(tem) / (double)(n));
}