#include <stdio.h>
#include"dijkstra.h"
#include"creat.h"
#include"addver.h"
#include"addside.h"
#include"deletever.h"
#include"deleteside.h"
int main(){
	bool s[maxn];
	int p[maxn];
	int dis[maxn];
	int w[maxn][maxn];
	int n=9;
	int m=16;
	FILE *fp; //�����ļ�ָ��
	/*
	creat(w, n, m);
	dijkstra(1, n, s, p, dis, w);
	if ((fp = fopen("D:\\����\\data.txt", "w")) == NULL)
	{
		printf("the file can not open..");
		exit(0);
	}
	for (int i = 0; i < maxn; i++)
	{
		for (int j = 0; j < maxn; j++)
		{
			fprintf(fp, "%d ", w[i][j]);
		}
	}
	fclose(fp);*/

	if ((fp = fopen("D:\\����\\data.txt", "r")) == NULL)
	{
		printf("the file can not open..");
		exit(0);
	}//������
	for (int i = 0; i < maxn; i++)
	{
		for (int j = 0; j < maxn; j++)
		{
			fscanf_s(fp, "%d ", &w[i][j]);
		}
	}
	int e = 0;
	int x = 0;
	while (1) {
		printf("\t*********** MENU ************\n");
		printf("\t��ӭʹ��·�ɱ����ɳ�������������ָ��\n");
		printf("\t1  ����·�ɱ���ӡ        \n");
		printf("\t2  ɾ���ڵ�       \n  ");
		printf("\t3  ɾ����        \n");
		printf("\t4  ���ӽڵ�    \n ");
		printf("\t5  ���ӱ�   \n ");
		printf("     ����������ָ��: ");
		scanf_s("%d", &e);
		if (e < 1 || e>5)   e = 6;
		switch (e) {
			//int v0,int n,bool s[maxn],int p[maxn],int dis[maxn],int w[maxn][maxn]
		case 1:;  printf("������Ҫ��ӡ��·�����ڵ㣺"); scanf_s("%d", &x); dijkstra(x, n, s, p, dis, w); break;
		case 2:;  deletever(n, m, w);   break;
		case 3:;  deleteside(n, m, w);  break;
		case 4:;  addver(n, m, w);      break;
		case 5:;  addside(n, m, w);     break;
		default: printf("����ָ��������Ϊ��������һ��"); break;
		}
	}
	return 0;
}
/*
9     16
1     2     2
1     7     1
1     6     1
2     3     2
2     4     4
3     6     3
3     4     1
3     7     2
4     7     6
4     5     1
4     8     5
4     9     2
5     6     5
6     7     1
7     8     3
8     9     2
*/