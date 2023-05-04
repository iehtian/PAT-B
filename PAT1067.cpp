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
    string mima;
    int n;
    cin >> mima >> n;
    string shi;
    getchar();
    getline(cin, shi);
    int i = 1;
    while (shi!="#")
    {
        if (mima==shi&&i<=n)
        {
            printf("Welcome in");
            return 0;
        }
        
        // else if (i>n)
        // {
        //     printf("Account locked");
        //     return 0;
        // }
        else if(mima!=shi){
            cout << "Wrong password: " << shi << endl;
            if (i==n){
                printf("Account locked");
                return 0;
            }
            
        }
        getline(cin, shi);
        i++;
    }
}