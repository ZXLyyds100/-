question: 
  18118 勇者斗恶龙
description:
  有n个头的恶龙，你希望雇一些骑士把它杀死（即砍掉所有头）。村里有ｍ个骑士可以雇佣，一个能力值为x的骑士可以砍掉恶龙
一个直径不超过x的头，且需要支付x个金币。如何雇佣骑士才能砍掉恶龙的所有头，且需要支付的金币最少？注意，一个骑士只
能砍一个头（且不能被雇佣两次）



输入格式
多组数据，每组数据的第一行为正整数n和m(1<=n,m<=200000)；以下n行每行为一个整数，即恶龙每个头的直径；以下m行每行为
一个整数，即每个骑士的能力。输入结束标志ｎ＝ｍ＝0;


输出格式
输出格式：每组数据，输出最少花费，无解输出"Loowater is doomed!"


输入样例
2 3
5
4
7
8
4
2 1
5
5
10
0 0


输出样例
11
Loowater is doomed!

是简单贪心加stl

AcCode:
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
    while (true) {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) break;

        vector<int> dragonHeads(n);
        vector<int> knights(m);

        for (int i = 0; i < n; ++i) {
            cin >> dragonHeads[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> knights[i];
        }

        sort(dragonHeads.begin(), dragonHeads.end());
        sort(knights.begin(), knights.end());

        int cost = 0;
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (knights[j] >= dragonHeads[i]) {
                cost += knights[j];
                ++i;
            }
            ++j;
        }

        if (i == n) {
            cout << cost << endl;
        }
        else {
            cout << "Loowater is doomed!" << endl;
        }
    }

    return 0;
}
