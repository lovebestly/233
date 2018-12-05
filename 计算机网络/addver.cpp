#include"addver.h"

//在A中插入顶点vertices
void addver(int &n, int &m, int w[maxn][maxn]) {
	int a, b, c, v;
	printf("请输入插入的结点和对应增加的边数: ");
	scanf_s("%d %d", &n, &v);
	m = m + v;
	for (int j = 1; j <= n; ++j) {
		w[n][j] = maxn;
		w[j][n] = maxn;//先将每条边的距离弄成很大，后面如果两条边的权值不等于这个很大的数，则说明两个数之间有边
	}
	printf("请输入两点和对应的权值\n");
	for (int i = 0; i < v; ++i) {
		scanf_s("%d %d %d", &a, &b, &c);
		w[a][b] = c;       //无向图
		w[b][a] = c;
	}
}
