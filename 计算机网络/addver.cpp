#include"addver.h"

//��A�в��붥��vertices
void addver(int &n, int &m, int w[maxn][maxn]) {
	int a, b, c, v;
	printf("���������Ľ��Ͷ�Ӧ���ӵı���: ");
	scanf_s("%d %d", &n, &v);
	m = m + v;
	for (int j = 1; j <= n; ++j) {
		w[n][j] = maxn;
		w[j][n] = maxn;//�Ƚ�ÿ���ߵľ���Ū�ɺܴ󣬺�����������ߵ�Ȩֵ����������ܴ��������˵��������֮���б�
	}
	printf("����������Ͷ�Ӧ��Ȩֵ\n");
	for (int i = 0; i < v; ++i) {
		scanf_s("%d %d %d", &a, &b, &c);
		w[a][b] = c;       //����ͼ
		w[b][a] = c;
	}
}
