#include"deletever.h"

//��A��ɾ����b������
void deletever(int &n, int &m, int w[maxn][maxn]) {
	int a, b;
	printf("������ɾ���Ľڵ�: ");
	scanf_s("%d", &a);
	for (b = 1; b <= n; ++b) {
		if (w[a][b] != maxn) {
			w[a][b] = maxn;
			w[b][a] = maxn;
			m--;
		}
	}
}