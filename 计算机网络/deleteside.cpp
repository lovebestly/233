#include"deleteside.h"

// ��A��ɾ��һ����n1������ָ���n2������ı�
void deleteside(int &n, int &m, int w[maxn][maxn]) {
	int a, b;
	printf("������ɾ���ı�: ");
	scanf_s("%d %d", &a, &b);
	w[a][b] = maxn;   //����ͼ
	w[b][a] = maxn;
	m--;
}