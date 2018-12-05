#include"dijkstra.h"


void dijkstra(int v0, int n, bool s[maxn], int p[maxn], int dis[maxn], int w[maxn][maxn]) {
	int i, j;
	dis[0] = 0;
	p[v0] = 0;
	dis[v0] = 0;
	s[v0] = true;
	for (i = 1; i <= n; ++i) {    //将每个点到起点的距离更新一下
		dis[i] = w[v0][i];
		s[i] = false;
		if (i != 0 && dis[i] < maxn)
			p[i] = v0;
		else p[i] = -1;
	}
	while (1) {
		int min = maxint;
		int u = -1;     //标志变量
		for (int j = 1; j <= n; ++j) {
			if ((!s[j]) && dis[j] < min) {    //找出不在图里面且权值最小的点
				u = j;                        //将这个点记录下来
				min = dis[j];
			}
		}
		if (u == -1) break;
		s[u] = true;   //将这个点放入图中
		for (int j = 1; j <= n; ++j) {
			if ((!s[j]) && dis[u] + w[u][j] < dis[j]) {
				dis[j] = dis[u] + w[u][j];   //松弛操作    更新起点到这个点的距离
				p[j] = u;
			}
		}
	}
	printf("目的路由器 \t下一跳路由 \t  最短距离\n");
	printf("袁道雄")；
	for (i = 1; i <= n; i++) {
		if (i == v0) continue;
		j = i;
		if (p[j] != v0) { j = p[j]; if (j == -1)continue; }
		printf("     %d \t\t   %d \t\t    %d\n", i, j, dis[i]);
	}
}