#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int left, right, sqr, b, error = 1;
    cin >> left >> right;
    for(int a = left; a <= right; ++a)
    {
        sqr = (int)sqrt(pow(a,3)-pow(a-1,3));
        b = sqrt(sqr/2)+1;
        {
            if(pow(a,3)-pow(a-1,3) == pow(pow(b,2)+pow(b-1,2),2)
              && a != b)
            {
               cout << a << ' ' << b <<endl;
                error = 0;
            }
        }
    }
    if(error)
        cout << "No Solution" << endl;
    return 0;
}
