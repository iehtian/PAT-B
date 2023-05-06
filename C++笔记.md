### 数组查找

```
int *p=find(a,a+n,num);
找到：a[p-a]==num;
未找到：p-a==n;
```

### cout保留位数输出

```c++
头文件为#include <iomanip>
整数前补0
setw(int n)只对紧接着的输出有效，默认以空格填充。
setfill(char c)对随后的输出都有效
cout << setw(3) << setfill('0') << 12 << endl;
小数保留位数输出
cout << fixed << setprecision(2) << 1.234;
```

### 字符串与数字转换

```c++
#include<string>
stod()//字符串转double
stof()//字符串转float
stoi()//字符串转int
stol()//字符串转long
stold()//字符串转double
stoll()//字符串转long long
stoul()//字符串转unsigned long
stoull()//字符串转unsinged long long
//注意！没有unsigned double和unsigned float！！！

//int, unsigned int, long, unsigned long, long long, unsigned long long
//float, double
string str = to_string(数字);
```

### 判断素数

```c++
bool isPrime(int n){
    if ((n%2==0||n==1)&&n!=2) return false;
    for (int i = 3; i <= sqrt(n); i=i+2)//从3开始，依次判断n能否整除到根号n为止的奇数
    {
        if (n%i==0) return false;
    }
    return true;//以上判断后函数仍未返回，说明为素数，返回true
 }
```

### 取绝对值

```c++
abs(int)
fabs(double)
```

取整

```
//输出时只能用cout
floor()//向下取整
ceil()//向上取整
round//四舍五入取整
fix()向0方向取整
```

大整数除整数（模拟竖式法）

```c++
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
```

最大公约数与最小公倍数

```c++
int gongyueshu(int x, int y)//辗转相除法求最大公约数，适用于负数
{	
	int z = y;
	while(x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	}
	return z;
}
int gongbeishu(int x,int y){
return x*y/gongyueshu(x,y);
}
```

浮点数输出

```c++
保留两位为例，当浮点数x在-0.04和0之间时，print会输出-0.00，而应该输出0.00，此时应用判断语句手动归零
if (jieguo<0&&jieguo>-0.005)
    printf("0.00");
```

