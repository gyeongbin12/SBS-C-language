#pragma once
#include <stdio.h>

void CallByValue(int x)
{
	x = 100;
	printf("함수 내부에 있는 값: %d\n", x);
}

void CallByReference(int* x)
{
	*x = 100;
}

int main()
{

	// scanf 함수 변수 입력
	/*
	int value = 0;
	int value2 = 0;

	// 정수값을 입력 받으려면 %d라는 서식 지정자를 사용합니다.
	scanf_s("value:%d,value2:%d", &value, &value2); // call by value로 하게 되면 <- 내부에서만 값이 변화됩니다.

	printf("value의 값 : %d, value2의 값 : %d", value, value2);
	*/

	// scanf 함수 배열 입력
	/*
	char name[10];

	// 배열의 크기는 컴팡리 시점에 크기가 정해집니다.
	// 배열의 크기를 명시적으로 scanf_s()함수에게 알려주어야 합니다.
	scanf_s("%s", name, sizeof(name));

	printf("%s", name);
	*/

	// 오븐 시계
	int hour, minute, time;
	scanf_s("%d %d %d", &hour, &minute, &time);
	hour += time / 60;
	minute += time % 60;
	if (minute >= 60) {
		hour++;
		minute %= 60;
	}
	if (hour >= 24)
		hour %= 24;
	printf("%d %d\n", hour, minute);


	// 값에 의한 전달과 참조에 의한 전달
	/*
	printf("value 변수의 값 : %d\n", value); // call by reference로 하게 되면
						 // 함수가 종료되더라도 변화된 값이 그대로 적용다.
	CallByValue(value);

	printf("value 변수의 값 : %d\n", value);

	CallByReference(&value);

	printf("value 변수의 값 : %d\n", value);
	*/

	return 0;
}
