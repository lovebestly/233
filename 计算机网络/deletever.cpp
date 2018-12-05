#include"deletever.h"

//在A中删除第b个顶点
void deletever(int &n, int &m, int w[maxn][maxn]) {
	int a, b;
	printf("请输入删除的节点: ");
	scanf_s("%d", &a);
	for (b = 1; b <= n; ++b) {
		if (w[a][b] != maxn) {
			w[a][b] = maxn;
			w[b][a] = maxn;
			m--;
		}
	}
}