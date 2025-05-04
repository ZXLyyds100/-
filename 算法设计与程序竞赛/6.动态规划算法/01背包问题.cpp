18705 01背包问题
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC;JAVA;PYTHON

Description
有一个容积为M的背包和N件物品。第i件物品的体积W[i]，价值是C[i]。求解将哪些物品装入背包可使价值总和最大。每种物品只有一件，
可以选择放或者不放入背包。



输入格式
第一行：两个整数，M(背包容量，M<=200)和N(物品数量，N<=30)；
第2..N+1行：每行二个整数Wi，Ci，表示每个物品的重量和价值。


输出格式
一个数，表示最大总价值。


输入样例
10 4
2 1
3 3
4 5
7 9


输出样例
12

模板背包问题
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 40;
int f[N];
int w[N], c[N];
int M, n;
int main()
{
	cin >> M >> n;
	for (int i = 1; i <= n; i++)cin >> w[i] >> c[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = M; j >= w[i]; j--)
		{
			f[j] = max(f[j], f[j - w[i]] + c[i]);
		}
	}
	cout << f[M] << endl;
}
