
#include"creat.h"

//����ͼA�������в���n�������e����
void creat(int w[maxn][maxn], int &n, int &m) {
	int a, b, v;
	printf("����������Ŀ�͵���: ");
	if (scanf_s("%d %d", &n, &m) && n&&m) {    //��������Ŀ�ͱߵ���Ŀ	
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				w[i][j] = maxn;     //�Ƚ�ÿ���ߵľ���Ū�ɺܴ󣬺�����������ߵ�Ȩֵ����������ܴ��������˵��������֮���б�
			}
		}
		
		printf("����������Ͷ�Ӧ��Ȩֵ\n");
		for (int i = 0; i < m; ++i) {
			scanf_s("%d %d %d", &a, &b, &v);
			w[a][b] = v;       //����ͼ
			w[b][a] = v;       //
		}
	}
}