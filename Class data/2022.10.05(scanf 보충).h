#pragma once
#include <stdio.h>

void CallByValue(int x)
{
	x = 100;
	printf("�Լ� ���ο� �ִ� ��: %d\n", x);
}

void CallByReference(int* x)
{
	*x = 100;
}

int main()
{

	// scanf �Լ� ���� �Է�
	/*
	int value = 0;
	int value2 = 0;

	// �������� �Է� �������� %d��� ���� �����ڸ� ����մϴ�.
	scanf_s("value:%d,value2:%d", &value, &value2); // call by value�� �ϰ� �Ǹ� <- ���ο����� ���� ��ȭ�˴ϴ�.

	printf("value�� �� : %d, value2�� �� : %d", value, value2);
	*/

	// scanf �Լ� �迭 �Է�
	/*
	char name[10];

	// �迭�� ũ��� ���θ� ������ ũ�Ⱑ �������ϴ�.
	// �迭�� ũ�⸦ ��������� scanf_s()�Լ����� �˷��־�� �մϴ�.
	scanf_s("%s", name, sizeof(name));

	printf("%s", name);
	*/

	// ���� �ð�
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


	// ���� ���� ���ް� ������ ���� ����
	/*
	printf("value ������ �� : %d\n", value); // call by reference�� �ϰ� �Ǹ�
						 // �Լ��� ����Ǵ��� ��ȭ�� ���� �״�� �����.
	CallByValue(value);

	printf("value ������ �� : %d\n", value);

	CallByReference(&value);

	printf("value ������ �� : %d\n", value);
	*/

	return 0;
}
