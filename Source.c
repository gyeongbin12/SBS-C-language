#include <stdio.h>

void main()
{
	// ��и�
	/*
	// �� 1 ��и� : (+x, +y)
	// �� 2 ��и� : (-x, +y)
	// �� 3 ��и� : (-x, -y)
	// �� 4 ��и� : (+x, -y)

	// Y ���� : (x[0], y)
	// X ���� : (x, y[0])
	// ���� : (x[0],y[0])

	int x = 0;
	int y = 10;

	if (x > 0 && y > 0)
	{
		printf("�� 1 ��и��Դϴ�");
	}
	else if (x < 0 && y > 0)
	{
		printf("�� 2 ��и��Դϴ�");
	}
	else if (x < 0 && y < 0)
	{
		printf("�� 3 ��и��Դϴ�");
	}
	else if (x > 0 && y < 0)
	{
		printf("�� 4 ��и��Դϴ�");
	}
	else if (x == 0 && y != 0)
	{
		printf("Y ����");
	}
	else if (x != 0 && y == 0)
	{
		printf("X ����");
	}
	else
	{
		printf("����");
	}
	*/

	// �� ������
	// && (AND) : �� ���� ���� ��� ���̶�� ������ �����մϴ�. 
	// || (OR) : �� ���� ���ǿ� �ϳ��� ���̸� ������ �����մϴ�.
	/*
	if (x != 10 && y == 20)
	{
		printf("�� ���� AND�� ���Դϴ�.\n");

		if (5 < 10)
		{
			printf("if�� �ȿ� �ִ� ���ǹ� �Դϴ�.\n");
		}
	}

	if (x == 10 || y == 25)
	{
		printf("�� ���� OR�� ���Դϴ�.\n");
	}
	*/

	// switch
	// � ����� ���� �� ������� ���� �Ǵ� ���ǹ� �Դϴ�.
	/*
	float variable = 3.25;

	switch (variable)
	{
		case 3.25 : printf("�ε� �Ҽ����� ������ ���� switch�� ������ ����� �� �����ϴ�.")
		 break;
	}
	*/

	// break��
	// Ư���� �������� �б⸦ Ż���ϴ� ����Դϴ�.
	/*
	int value = 5;

	switch (value)
	{
		case 0 : printf("0 �Դϴ�.");
			break;
		case 1 : printf("1 �Դϴ�.");
			break;
		default: printf("�߸� �����߽��ϴ�.");
	}
	
	// ���� ����ǥ
	// A�� 100 ~ 90 ��
	// B�� 90 ~ 80 ��
	// C�� 80 ~ 70 ��
	// D�� 70 ~ 60 ��
	// E�� 60~ 50 ��
	// �����Դϴ�.

	char alphabet = 'F';

	switch (alphabet)
	{
		case 'A': printf("100 �� ~ 90 ��");
			break;
		case 'B': printf("90 �� ~ 80 ��");
			break;
		case 'C': printf("80 �� ~ 70 ��");
			break;
		case 'D': printf("70 �� ~ 60 ��");
			break;
		case 'E': printf("60 �� ~ 50 ��");
			break;
		default : printf("�����Դϴ�.");
	}
	*/





}	