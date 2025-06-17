question:
  19116 丑数
description:
  “丑数”是指除了质因子2,3，5，不含其它质因子的正整数，例如由小到大前10个“丑数”为
1, 2, 3, 4, 5, 6, 8, 9, 10, 12, ...
现要求编写一个程序，输出指定第几位的“丑数”。



输入格式
第一行为正整数T（T<=10000）, 表示case的数目。
此后T行，每行一个正整数 n (确定该第n个凑数不超过100000000).


输出格式
每一个n，输出第n个“丑数”


输入样例
3
1
2
9


输出样例
1
2
10


ACcode:
#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;
typedef long long ll;
const int N=1e5+5;
int num[3]={2,3,5};
ll ugly[N];
 
int main()
{
    ll cnt=0;
    set<ll>s;
    priority_queue<ll,vector<ll>,greater<ll> >q;//最小堆
    q.push(1);
    while(cnt<1e5){
        ll x=q.top();
        q.pop();
        ugly[++cnt]=x;
        for(int i=0;i<3;++i){
            ll y=x*num[i];
            if(!s.count(y)){
                q.push(y);
                s.insert(y);//防重
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ugly[n]<<endl;
    }
    return 0;
}
