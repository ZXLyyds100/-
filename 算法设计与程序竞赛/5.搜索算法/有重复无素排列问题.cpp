
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int path[12];
int a[12];
bool st[12];
void dfs(int u) {
	if (u > n) {
		for (int i = 1; i <= n; i++) {
			cout << path[i] << ' ';
		}
		cout << endl;
	}
	for (int i = 1; i <= n; i++) {
		
			if (path[u-1] % 2 == 1 && a[i] % 2 == 1&&u>1)continue;

			if (!st[i]) {
        //如果有连续俩个相同的数字而且前一个还没用过，那么此时必须让前一个先用
				if (i > 1 && a[i] == a[i - 1] && !st[i - 1]) {
					continue;
				}
				if (u > 1 && path[u - 1] % 2 !=0 && a[i] % 2 != 0)
				{
					continue;
				}
				st[i] = true;
				path[u] = a[i];
				dfs(u + 1);
				st[i] = false;
			}
	}
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	dfs(1);
	return 0;
}

19650 有重复无素排列问题
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC;JAVA;PYTHON

描述：
从键盘输入N个整数N<=10,要求输出这N个整数的全排列，且每一个排列当中，相邻两个数不能同为奇数。

输入格式：
第一行一个正整数N
第二行N个整数，以空格分隔

输出格式：
一行一个排列，按小到大的顺序输出

输入样例：
3
1 1 2

输出样例：
1 2 1

