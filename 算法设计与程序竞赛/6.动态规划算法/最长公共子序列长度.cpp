
18308 最长公共子序列长度
时间限制:1000MS  代码长度限制:10KB
提交次数:0 通过次数:0

题型: 编程题   语言: G++;GCC;VC

Description
给定两个字符串，请输出这两个字符串的最大公共子序列



输入格式
两行，一行一个字符串（不包括空格，Tab键）,长度不超过1000


输出格式
输出最大公共子序列的长度


输入样例
abbca
aba


输出样例
3


这里f[i][j]是a[i]和b[j]的前i项和j项的最长公共子序列长度
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
const int N = 1010;
int f[N][N];
char a[N], b[N];
int main()
{
	cin >> a + 1 >> b + 1;
	int la = strlen(a + 1);
	int lb = strlen(b + 1);
	for (int i = 1; i <= la; i++)
	{
		for (int j = 1; j <= lb; j++)
		{
			if (a[i] == b[j])f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
			else
				f[i][j] = max(f[i - 1][j], f[i][j - 1]);
		}
	}
	cout << f[la][lb] << endl;
}
