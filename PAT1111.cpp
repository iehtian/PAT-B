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
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        string month,day,year;
        string data;
        cin >> month>>day>>year;
        day = day.substr(0, day.length()-1);
        while (day.length()<2)
        {
            day = "0" + day;
        }
        
        while (year.length()<4)
        {
            year = "0" + year;
        }
        if (month=="Jan")
        {
            month = "01";
        }
        else if (month=="Feb")
        {
            month = "02";
        }
        else if (month=="Mar")
        {
            month = "03";
        }
        else if (month=="Apr")
        {
            month = "04";
        }
        else if (month=="May")
        {
            month = "05";
        }
        else if (month=="Jun")
        {
            month = "06";
        }
        else if (month=="Jul")
        {
            month = "07";
        }
        else if (month=="Aug")
        {
            month = "08";
        }
        else if (month=="Sep")
        {
            month = "09";
        }
        else if (month=="Oct")
        {
            month = "10";
        }else if (month=="Nov")
        {
            month = "11";
        }
        else if (month=="Dec")
        {
            month = "12";
        }
        data = year + month + day;
        int tag = 0;
        for (int i = 0; i < 7; i++)
        {
            if (data[i]!=data[7-i])
            {
                cout << "N " << data << endl;
                tag = 1;
                break;
            }
        }
        if (tag==0)
        {
            cout << "Y " << data << endl;
        }
        
        
    }
    
}