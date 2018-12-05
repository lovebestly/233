#pragma once
#include<iostream>
const int maxn = 25;
const long long maxint = 1000;
using namespace std;

void dijkstra(int v0, int n, bool s[maxn], int p[maxn], int dis[maxn], int w[maxn][maxn]);