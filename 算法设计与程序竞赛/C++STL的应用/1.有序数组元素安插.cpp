question:
  19634 有序数组元素的安插
description
    给定n个有序整数构成的序列，之后做m次操作，每次操作给定一个整数，要求将该整数安插到有序序列当中，之后序列仍然保持有序，每一次操作之后，输出当前序列的中位数。(中位数是指，当序列为奇数个数时，中位数为排在中间的那个数字，当序列为偶数个数时，中位数为排在中间的两个数之和的一半)

输入格式：
第一行为n
第二行为n个整数，以空格分割
第三行为m
第四行为m个整数，以空格分割

输出格式：
m行，每行一个输出的中位数

输入样例：
3
1 5 9
2
3 10

输出样例：
4
5


  ACcode:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 函数：计算中位数
double findMedian(vector<int>& nums) {
    int n = nums.size();
    if (n % 2 == 1) { // 奇数个数
        return nums[n / 2];
    } else { // 偶数个数
        return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
    }
}

int main() {
    int n;
    cin >> n; // 输入初始序列的长度
    vector<int> nums(n);

    // 输入初始序列
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int m;
    cin >> m; // 输入操作次数
    vector<int> ops(m);

    // 输入操作序列
    for (int i = 0; i < m; ++i) {
        cin >> ops[i];
    }

    // 对初始序列进行排序（确保有序）
    sort(nums.begin(), nums.end());

    // 对每个操作进行处理
    for (int i = 0; i < m; ++i) {
        // 将操作数插入到有序序列中
        nums.insert(lower_bound(nums.begin(), nums.end(), ops[i]), ops[i]);

        // 输出当前序列的中位数
        cout << findMedian(nums) << endl;
    }

    return 0;
}
