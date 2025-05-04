#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll a[20];
ll n;
ll ans = 0;
ll b[20];
ll k;
ll st[20];
ll getNum() {
	ll num = 0;
	for (int i = 1; i <= n; i++) {
		num = num * 10 + b[i];
	}
	return num;
}
void dfs(int depth) {
	if (depth == n + 1) {
		if (getNum() % k == 0 && ans == 0) {
			ans = getNum();
		}
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == 0 && depth == 1) {
			continue;
		}
		if (st[i] == 0) {
			b[depth] = a[i];
			st[i] = 1;
			dfs(depth + 1);
			st[i] = 0;
		}
	}
}
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++)cin >> a[i];
	if (n == 1 && a[1] == 0) {
		cout << "0" << endl;
	}
	else {
		sort(a + 1, a + n + 1);
		dfs(1);
		if (ans == 0) {
			cout << "-1" << endl;
		}
		else {
			cout << ans << endl;
		}
	}
	return 0;
}


19010 最小的特殊数字
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC;JAVA

Description
用全部N(N<=10)个0-9的数字组成一个“有效”整数（即没有前置0的整数），
求这些组成的数中能被K(0<K<10^10)整除的最小数字。



输入格式
输入分两行，第一行输入N, K，第二行输入N个数字。


输出格式
输出满足条件的最小的数（不含前置0），如果没有满足条件的数输出 -1。


输入样例
4 7
4 0 1 3


输出样例
1043


提示
413 % 7 = 0， 但是有前置0，所以满足条件的最小数是 1043 % 7 = 0。
此类题目需注意特殊情况，比如n=1时,如只输入一个0，答案只能是0。
注意long long
