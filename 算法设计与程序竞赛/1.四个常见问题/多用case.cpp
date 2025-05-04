question:
  18104 练习使用多case解题
description:
  多CASE的问题在般有3种情形：（1）有一个数字开始表明CASE数目；（2）以特殊标志表示结束；（3）要求处理到最后一行。
现要求你在程序一次运行中，依次处理上述3种情况。

有三批测试数据，第1批测试数据，开头会以一个数字告之该批CASE数量，每一个CASE是两个正整数；
第1批测试数据结束后，紧接着是第2批数据，每一个CASE同样是两个正整数，第2批测试数据以两个0结束；
第2批测试数据结束后，紧接着是第3批数据，每一个CASE也是两个正整数，第3批测试数据一直到数据输入结束；

要求，每一个CASE，输出两数的最小公倍数
第1批测试数据处理完毕时，输出“group 1 done”
第2批测试数据处理完毕时，输出“group 2 done”
第3批测试数据处理完毕时，输出“group 3 done”



输入格式
有三批测试数据，第1批测试数据，开头会以一个数字告之该批CASE数量，每一个CASE是两个正整数(最大2的31次方)；
第1批测试数据结束后，紧接着是第2批数据，每一个CASE同样是两个正整数，第2批测试数据以两个0结束；
第2批测试数据结束后，紧接着是第3批数据，每一个CASE也是两个正整数，第3批测试数据一直到数据输入结束；


输出格式
要求，每一个CASE，输出两数的最小公倍数
第1批测试数据处理完毕时，输出“group 1 done”
第2批测试数据处理完毕时，输出“group 2 done”
第3批测试数据处理完毕时，输出“group 3 done”


输入样例
2
6 10
5 12
8 16
12 18
8 4
0 0
4 5
4 6


输出样例
30
60
group 1 done
16
36
8
group 2 done
20
12
group 3 done




  ACcode:
#include <iostream>
#include <algorithm>
using namespace std;

// 求最小公倍数函数
long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b; // 先求最大公约数，防止溢出
}

int main() {
    // 处理第1组数据
    int group1_cases;
    cin >> group1_cases;
    while (group1_cases--) {
        long long a, b;
        cin >> a >> b;
        cout << lcm(a, b) << endl;
    }
    cout << "group 1 done" << endl;

    // 处理第2组数据
    while (true) {
        long long a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break; // 以 (0, 0) 结束
        cout << lcm(a, b) << endl;
    }
    cout << "group 2 done" << endl;

    // 处理第3组数据
    while (true) {
        long long a, b;
        if (!(cin >> a >> b)) break; // 输入到文件结束
        cout << lcm(a, b) << endl;
    }
    cout << "group 3 done" << endl;

    return 0;
}
