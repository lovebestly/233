
#include"creat.h"

//创建图A，向其中插入n个顶点和e条边
void creat(int w[maxn][maxn], int &n, int &m) {
	int a, b, v;
	printf("请输入结点数目和点数: ");
	if (scanf_s("%d %d", &n, &m) && n&&m) {    //输入点的数目和边的数目	
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				w[i][j] = maxn;     //先将每条边的距离弄成很大，后面如果两条边的权值不等于这个很大的数，则说明两个数之间有边
			}
		}
		
		printf("请输入两点和对应的权值\n");
		for (int i = 0; i < m; ++i) {
			scanf_s("%d %d %d", &a, &b, &v);
			w[a][b] = v;       //无向图
			w[b][a] = v;       //
		}
	}
}