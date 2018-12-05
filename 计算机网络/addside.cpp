#include"addside.h"

//在A中插入一条第n1个顶点指向第n2个顶点，权值为weight的有向边
void addside(int &n, int &m, int w[maxn][maxn]) {
	int a, b, v;
	printf("请输入插入的边: ");
	scanf_s("%d %d %d", &a, &b, &v);
	w[a][b] = v;       //无向图
	w[b][a] = v;
	m++;
}