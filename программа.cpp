// 1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
#include "cstdlib" // ��� system
using namespace std;
//� ������� ���������
int main()
{
	int a, b, p;
	scanf("%d%d", &a, &b);
	p = a*b*b;
	printf("pri proizvedenii chisla %d na chislo %d rezultat raven %d\n", a, b, p);
	system("pause");
	return 0;
}
