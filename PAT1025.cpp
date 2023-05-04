#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct list{	//节点
    int data;
    int next;
    int address;
}l[100000];

int main()
{
    int first,n,k,address,i;
    cin >>first>>n>>k;
    vector<list> v;
    for(i=0;i<n;i++){	//输入
        cin >>address;
		cin >>l[address].data>>l[address].next;
    	l[address].address=address;
	}
	for(i=first;l[i].next!=-1;i=l[i].next)	//找出这条合理的链表，并把有效节点加入vector中
		v.push_back(l[i]);
	v.push_back(l[i]);	//最后一个在循环里为加进去
	int x=v.size()%k;	//最后x位不需要反转
	for(i=0;i<v.size()-x;i+=k)	//反转节点
		reverse(v.begin()+i,v.begin()+k+i);
	for(i=0;i<v.size();i++)	//修改next
		v[i].next=v[i+1].address;
	v[--i].next=-1;
	for(i=0;i<v.size()-1;i++)
		printf("%05d %d %05d\n",v[i].address,v[i].data,v[i].next);
	printf("%05d %d %d\n",v[i].address,v[i].data,v[i].next);
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <math.h>
// #include <algorithm> 
// #include<iostream>
// #include<map>
// #include<set>
// #include <sstream>
// using namespace std;
// struct list
// {
//     int num=1000000;
//     int address;
//     int data;
//     int next;
// };
// bool cmp(list l1,list l2){
//     return l1.num < l2.num;
// }
// int main(){
//     int  first,N, K,firstnum;
    
//     scanf("%d%d%d",&first, &N, &K);
//     list l[N];
//     int a[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d%d%d", &l[i].address,&l[i].data,&l[i].next);
//         a[i] = l[i].address;
//         if (l[i].address==first)
//         {
//             l[i].num = 0;
//             firstnum = i;
//         }
        
//     }
//     int num2 = 1, find1 = l[firstnum].next;
//     for (int i = 0; i < N; i++)
//     {
//         if (find1==-1)
//         {
//             break;
//         }
//         int *f = find(a, a + N, find1);
//         l[f - a].num = num2;
//         num2++;
//         find1 = l[f - a].next;
        
//     }
//     sort(l, l + N, cmp);
//     int valid = num2;
//     num2 = 0;
//     for (int j = K-1; j < valid; j = j + K)
//     {
//         for (int i = j; i > j-(K-1); i--)
//         {
//             l[i].next = l[i-1].address;
//             l[i].num = num2;
//             num2++;
//         }
//         if (j+K<valid)
//         {
//             l[j - (K - 1)].next = l[j + K].address;
//             l[j-(K-1)].num = num2;
//             num2++;
//         }
//         else{
//             l[j - (K - 1)].num = num2;
//             l[j - (K - 1)].next = l[j+1].address;
//         }
//         if (j==valid-1)
//         {

//             l[j - (K - 1)].next = -1;
//         }
        
//     }
//     sort(l, l + valid, cmp);
//     for (int i = 0; i < valid; i++)
//     {
//         if (l[i].next!=-1)
//         {
//             printf("%05d %d %05d\n", l[i].address, l[i].data, l[i].next);
//         }
//         else{
//             printf("%05d %d %d\n", l[i].address, l[i].data, l[i].next);
//         }
        
//     }
// }
