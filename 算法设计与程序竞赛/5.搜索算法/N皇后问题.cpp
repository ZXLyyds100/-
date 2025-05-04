#include<iostream>
#include<algorithm>
using namespace std;
const int N = 20;
char q[N][N];
int cnt = 0;
bool cor[N * 2], udg[N * 2], dg[N * 2];//行，俩个对角线是否有皇后的攻击的可能性
int n;
void dfs(int u) {
	if (u == n) {
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!cor[i] && !dg[i + u] && !udg[n - i + u]) {
			q[u][i] = 'Q';
			cor[i] = dg[i + u] = udg[n - i + u] = true;
			dfs(u + 1);
			cor[i] = dg[i + u] = udg[n - i + u] = false;
			q[u][i] = '.';
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for(int i=0;i<n;i++)
			for (int j = 0; j < n; j++) {
				q[i][j] = '.';
			}
		dfs(0);
		cout << cnt << endl;
		cnt = 0;
	}
}
这里的q数组不用写，我是之间从之前写的东西改的

18124 N皇后问题
时间限制:5000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC

Description
有N*N的国际象棋棋盘，要求在上面放N个皇后，要求任意两个皇后不会互杀，有多少种不同的放法？



输入格式
每一个数为T，代表CASE的数量，T<=13
此后，每行一个数N（13>=N>0）


输出格式
每一个CASE，输出对应答案


输入样例
2
4
5


输出样例
2
10
