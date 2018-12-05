#include"deleteside.h"

// 在A中删除一条第n1个顶点指向第n2个顶点的边
void deleteside(int &n, int &m, int w[maxn][maxn]) {
	int a, b;
	printf("请输入删除的边: ");
	scanf_s("%d %d", &a, &b);
	w[a][b] = maxn;   //无向图
	w[b][a] = maxn;
	m--;
}