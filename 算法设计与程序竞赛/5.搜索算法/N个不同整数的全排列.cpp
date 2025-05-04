
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int path[10];
int a[10];
bool st[10];
void dfs(int u) {
	if (u > n) {
		for (int i = 1; i <= n; i++) {
			cout << path[i] << ' ';
		}
		cout << endl;
	}
	for (int i = 1; i <= n; i++) {
		int j = a[i];
		if (!st[j]) {
			st[j] = true;
			path[u] = j;
			dfs(u + 1);
			st[j] = false;
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

19412 N个不同整数全排列
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC

描述：
由键盘输入N个不同的整数，输出这N个数的全部排列。

输入格式：
第一行一个正整数。N<=5
每二行N个整数，以空格分隔。

输出格式：
每行一个排列，数之间由一个空格分隔，要求排列按由小到大输出，不允许重复。

输入样例：
3
3 9 1

输出样例：
1 3 9
1 9 3
3 1 9
3 9 1
9 1 3
9 3 1

