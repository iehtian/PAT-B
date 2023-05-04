#include <iostream>
#include <string>
using namespace std;
int main()
{
	string A,Q;
    int i,len,B,R=0;
    cin>>A>>B;
    len=A.length();
    for(i=0;i<len;i++)
    {
        R=10*R+(A[i]-'0');
        if(R<B)
        {
            Q=Q+to_string(0);//不够除，商0
        }
        else
        {
            Q=Q+to_string(R/B);
            R=R%B;
        }
    }
    if(Q[0]=='0'&&Q.length()!=1)//假如最高位商0
        Q=Q.substr(1);//将字符串从第2位到最后1位截取出来
    cout<<Q<<" "<<R;
    return 0;
}

