#include"dijkstra.h"


void dijkstra(int v0, int n, bool s[maxn], int p[maxn], int dis[maxn], int w[maxn][maxn]) {
	int i, j;
	dis[0] = 0;
	p[v0] = 0;
	dis[v0] = 0;
	s[v0] = true;
	for (i = 1; i <= n; ++i) {    //��ÿ���㵽���ľ������һ��
		dis[i] = w[v0][i];
		s[i] = false;
		if (i != 0 && dis[i] < maxn)
			p[i] = v0;
		else p[i] = -1;
	}
	while (1) {
		int min = maxint;
		int u = -1;     //��־����
		for (int j = 1; j <= n; ++j) {
			if ((!s[j]) && dis[j] < min) {    //�ҳ�����ͼ������Ȩֵ��С�ĵ�
				u = j;                        //��������¼����
				min = dis[j];
			}
		}
		if (u == -1) break;
		s[u] = true;   //����������ͼ��
		for (int j = 1; j <= n; ++j) {
			if ((!s[j]) && dis[u] + w[u][j] < dis[j]) {
				dis[j] = dis[u] + w[u][j];   //�ɳڲ���    ������㵽�����ľ���
				p[j] = u;
			}
		}
	}
	printf("Ŀ��·���� \t��һ��·�� \t  ��̾���\n");
	printf("Ԭ����")��
	for (i = 1; i <= n; i++) {
		if (i == v0) continue;
		j = i;
		if (p[j] != v0) { j = p[j]; if (j == -1)continue; }
		printf("     %d \t\t   %d \t\t    %d\n", i, j, dis[i]);
	}
}