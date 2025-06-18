question:
  18107 校赛排名
description:
  校赛结束了，每一个参赛选手由3个数据项构成（通过题数，用时分钟数，姓名），排名按照通过题数排序
通过题数多的排前，同题数的，罚时少的排前。如果题数相同，罚时也相同，而按数据读取的先后排。
给你N个参赛选手的数据，按排序先后，输出姓名



输入格式
第一个数为N，（N<=500000）
此后，每行一个参赛选手的数据，通过题数，用时分钟数，姓名，前两者为整型数，姓名为字符串（不多于20个字符）


输出格式
姓名排名


输入样例
4
3 5 Jon
5 100 Smith
3 5 Tom
6 95 Hel


输出样例
Hel
Smith
Jon
Tom


提示
由于有500000个数据，输入和输出务必使用scanf和printf


#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

struct student {
	char name[25];
	int time;
	int q;
	int id;
	bool operator <(const student& w)const {
		if (q != w.q)return q > w.q;
		else if(time!=w.time){
			return time < w.time;
		}
		else {
			return id < w.id;
		}
	}
}Stu[500010];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d%d%s", &Stu[i].q, &Stu[i].time, &Stu[i].name);
		Stu[i].id = i;
	}
	sort(Stu, Stu + n);
	for (int i = 0; i < n; i++) {
		printf("%s\n", Stu[i].name);
	}
	return 0;

}
