//14장. 전처리와 분할 컴파일러
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define and &&
#define or ||

int main(void)
{
	int credits;
	double gpa;

	printf("지금까지 획득한 학점 수를 입력하세요: ");
	scanf("%d", &credits);
	printf("지금까지 획득한 학점 평균을 입력하세요: ");
	scanf("%lf", &gpa);

	if (credits >= 120 and gpa >= 2.0)
		printf("졸업 가능합니다.\n");
	else
		printf("좀 더 다녀야 합니다.\n");

	return 0;
}

//지금까지 획득한 학점 수를 입력하세요 : 125
//지금까지 획득한 학점 평균을 입력하세요 : 3.9
//졸업 가능합니다.


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
	printf("리눅스 버전입니다.\n");
	printf("점수를 입력하세요: ");
	scanf("%d", &n);

#else
	printf("윈도우 버전입니다.\n");
	printf("점수를 입력하세요: ");
	scanf("%d", &n);

#endif
	return 0;
}

//리눅스 버전입니다.
//점수를 입력하세요 : 20


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define DEBUG
#define PI 3.1415926
#define CIRCLE_AREA(r) (PI*r*r)

int main(void)
{
	double radius, area;

#ifdef DEBUG
	printf("디버깅 모드입니다.\n");
#endif

	printf("원의 반지름: ");
	scanf("%lf", &radius);
	area = CIRCLE_AREA(radius);
	printf("원의 면적 = %.2f", area);

	return 0;
}

//디버깅 모드입니다.
//원의 반지름 : 10.0
//원의 면적 = 314.16


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "power.h"

int main(void)
{
	int x, y;

	printf("x의 값을 입력하세요: ");
	scanf("%d", &y);
	printf("y의 값을 입력하세요: ");
	scanf("%d", &y);
	printf("%d의 %d 제곱값은 %f\n", x, y, power(x, y));

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
		printf("명령어 라인에서 %d번째 문자열 = %s\n", i, argv[i]);

	return 0;
}

//명령어 라인에서 0번째 문자열 = C:\Users\ironm\source\repos\Project33\Debug\Project33.exe