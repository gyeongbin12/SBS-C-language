#pragma once
#include <stdio.h>

int main()
{
	// ����� ���� ����
	/*
	const int value = 10;

	printf("value ������ �� : %d", value);

	// value�� ���� const�� ���ȭ�Ǿ����Ƿ� �ٲ� �� �����ϴ�.
	// value = 20;

	// �ɺ��� ��� : �޸� ������ ������ �ִ� ��� ex) const int data;
	// ���ͷ� ��� : �޸� ������ ������ ���� �ʴ� ��� ex) 10, "Count"
	*/

	// ������ ���
	/*
	int variable = 10;
	int variable2 = 20;

	// const�� �ڷ��� * �տ�  ���� �Ǹ� �������� �޸� ������ ���ȭ�մϴ�.
	int* const pointer = &variable;

	pointer = &variable2;

	printf("pointer ������ ����Ű�� �� : %d\n", *pointer);

	// pointer  : ������ ���� ��ü(�޸� ������ ���� ��µ˴ϴ�.)
	// *pointer : �����Ͱ� ����Ű�� �޸� ������ ���� ����մϴ�

	*pointer = 30;
	variable = 50;
	*/

	// ��� ���� ������
	int data = 10;
	int data2 = 20;

	const int* pointer = &data;

	pointer = &data2;

	// ��� ���� �����ʹ� ����Ű�� ������ ������ ���ȭ�ϴ� ���̰�,
	// ����Ű�� �ִ� �޸𸮴� ���ȭ�� ��Ű�°��� �ƴմϴ�.
	data2 = 30;

	// *pointer = 1000;

	// string -> [H][e][l][l][o][\ ]
	// OS read only Data ������ ������ �� ������ �����߱� �����Դϴ�.
	const char* string = "Hello";

	// *string = 'A';
	string = "LOL";



	return 0;
}
