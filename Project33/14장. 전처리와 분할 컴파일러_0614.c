//14��. ��ó���� ���� �����Ϸ�
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define and &&
#define or ||

int main(void)
{
	int credits;
	double gpa;

	printf("���ݱ��� ȹ���� ���� ���� �Է��ϼ���: ");
	scanf("%d", &credits);
	printf("���ݱ��� ȹ���� ���� ����� �Է��ϼ���: ");
	scanf("%lf", &gpa);

	if (credits >= 120 and gpa >= 2.0)
		printf("���� �����մϴ�.\n");
	else
		printf("�� �� �ٳ�� �մϴ�.\n");

	return 0;
}

//���ݱ��� ȹ���� ���� ���� �Է��ϼ��� : 125
//���ݱ��� ȹ���� ���� ����� �Է��ϼ��� : 3.9
//���� �����մϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main(void)
{
	int x = 2;

	printf("SQUARE(3) = %d\n", SQUARE(3));
	printf("SQUARE(1.2) = %f\n", SQUARE(1.2));
	printf("SQUARE(2+3) = %d\n", SQUARE(2 + 3));

	printf("x = %d\n", x);
	printf("SQUARE(x) = %d\n", SQUARE(x));
	printf("SQUARE(++x) = %d\n", SQUARE(++x));

	return 0;
}

//SQUARE(3) = 9
//SQUARE(1.2) = 1.440000
//SQUARE(2 + 3) = 25
//x = 2
//SQUARE(x) = 4
//SQUARE(++x) = 16


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LINUX

int main(void)
{
	int n;
#ifdef LINUX
	printf("������ �����Դϴ�.\n");
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

#else
	printf("������ �����Դϴ�.\n");
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

#endif
	return 0;
}

//������ �����Դϴ�.
//������ �Է��ϼ��� : 20


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define DEBUG
#define PI 3.1415926
#define CIRCLE_AREA(r) (PI*r*r)

int main(void)
{
	double radius, area;

#ifdef DEBUG
	printf("����� ����Դϴ�.\n");
#endif

	printf("���� ������: ");
	scanf("%lf", &radius);
	area = CIRCLE_AREA(radius);
	printf("���� ���� = %.2f", area);

	return 0;
}

//����� ����Դϴ�.
//���� ������ : 10.0
//���� ���� = 314.16


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "power.h"

int main(void)
{
	int x, y;

	printf("x�� ���� �Է��ϼ���: ");
	scanf("%d", &y);
	printf("y�� ���� �Է��ϼ���: ");
	scanf("%d", &y);
	printf("%d�� %d �������� %f\n", x, y, power(x, y));

	return 0;
}

#include "power.h"

double power(int x, int y)
{
	double result = 1.0;
	int i;

	for (i = 0; i < y; i++)
		result *= x;

	return result;
}

#ifndef POWER_H
#define POWER_H

double power(int x, int y);
#endif
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("��ɾ� ���ο��� %d��° ���ڿ� = %s\n", i, argv[i]);

	return 0;
}

//��ɾ� ���ο��� 0��° ���ڿ� = C:\Users\ironm\source\repos\Project33\Debug\Project33.exe