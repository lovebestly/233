#include"addside.h"

//��A�в���һ����n1������ָ���n2�����㣬ȨֵΪweight�������
void addside(int &n, int &m, int w[maxn][maxn]) {
	int a, b, v;
	printf("���������ı�: ");
	scanf_s("%d %d %d", &a, &b, &v);
	w[a][b] = v;       //����ͼ
	w[b][a] = v;
	m++;
}