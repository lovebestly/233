#include <stdio.h>
#include"dijkstra.h"
#include"creat.h"
#include"addver.h"
#include"addside.h"
#include"deletever.h"
#include"deleteside.h"
int main()
{
	bool s[maxn];
	int p[maxn];
	int dis[maxn];
	int w[maxn][maxn];
	int n;
	int m;
	creat(w, n, m);
	int e = 0;
	int x = 0;
	while (1) {
		printf("\t*********** MENU ************\n");
		printf("\t欢迎使用路由表生成程序，请输入您的指令\n");
		printf("\t1  生成路由表并打印        \n");
		printf("\t2  删除节点       \n  ");
		printf("\t3  删除边        \n");
		printf("\t4  增加节点    \n ");
		printf("\t5  增加边   \n ");
		printf("     请输入您的指令: ");
		scanf_s("%d", &e);
		if (e < 1 || e>5)   e = 6;
		switch (e) {
			//int v0,int n,bool s[maxn],int p[maxn],int dis[maxn],int w[maxn][maxn]
		case 1:;  printf("请输入要打印的路由器节点："); scanf_s("%d", &x); dijkstra(x, n, s, p, dis, w); break;
		case 2:;  deletever(n, m, w);   break;
		case 3:;  deleteside(n, m, w);  break;
		case 4:;  addver(n, m, w);      break;
		case 5:;  addside(n, m, w);     break;
		default: printf("输入指令有误，已为您返回上一级"); break;
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