#pragma once
#include <stdio.h>
#include <time.h>

// ��� �Լ�
void Function(int count)
{
	// �Ű������� ���� 1�� �Ǹ� �Լ��� ��ȯ�մϴ�.
	if (count == 1)
	{
		return;
	}

	// ��� ȣ��(count - 1)
	Function(count - 1);

	printf("count ������ �� : %d\n", count);
}

// ���丮��
int Factorial(int number)
{
	if (number == 1)
	{
		return 1;
	}
	else
	{
		return number * Factorial(number - 1);
	}
}

void main()
{
	// UP - DOWN ����
	/*
	// 1. ��ǻ�Ͱ� ������ ���ڸ� �̽��ϴ�. ���� (a) <- ������ ���� �־��ݴϴ�.
	// 2. �츮�� scanf_s( )�Լ��� ����ؼ� ���� �Է��մϴ�. ���� (b) <- �Է��� ���� �־��ݴϴ�.
	// 3. �״��� ��ǻ�Ͱ� ���� ������ ���ڿ� �츮�� �Է��� ���ڰ� �´��� Ȯ���ϴ� �����Դϴ�.

	// if(a�� b�� �´��� Ȯ���մϴ�.)
	// ������ "��ǻ�Ϳ��� �¸��Ͽ����ϴ�."
	// Ʋ���� HP�� 1�� �����մϴ�.

	int answer = 0;
	int life = 5;

	srand(time(NULL));

	int computer = rand() % 50 + 1;

	// ���� ������Ʈ
	// life ������ 0�� �ƴ϶�� ������ ��� ����˴ϴ�.
	while (life != 0)
	{
		printf("��ǻ�Ͱ� ������ �ִ� ���ڸ� �Է����ּ���.\n");

		// scanf_s( )�Լ��� ���۸� ����մϴ�.
		// ���۶�?
		// �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
		// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ �����˴ϴ�.

		scanf_s("%d", &answer);

		if (answer == computer)
		{
			printf("���ӿ��� �¸��ϼ̽��ϴ�.\n");
			break; // while������ Ż���մϴ�.
		}
		else if (answer > computer)
		{
			life--;
			printf("DOWN\n");

		}
		else if (answer < computer)
		{
			life--;
			printf("UP\n");
		}

		printf("���� life : %d\n", life);
	}

	if (life == 0)
	{
		printf("����� ���ӿ��� �й��Ͽ����ϴ�\n");
		printf("��ǻ�� �� : %d", computer);
	}
	*/

	// ���� ������
	// 3���� �ǿ����ڸ� ������ ���� �������Դϴ�.
	/*
	int x = 10;
	int y = 20;

	//		(����) ? (100) : (200)
	//			      ��      ����
	int temp = x < y ? 50 : 100;

	printf("temp ������ �� : %d", temp);
	*/

	// ��� �Լ���?
	/*
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ��Դϴ�.
	Function(3);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������
	// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �Ͼ�� �˴ϴ�.

	// ��� �Լ��� ����Ϸ��� Ư���� �������� �Լ��� ��ȯ���־�� �մϴ�.
	*/

	// ���丮��
	// �Լ��� �����ؼ� �Ű� ������ n���� �־��ݴϴ�.
	// n�� ���� ���� ���丮���� �����ּ���.
	int select = 3;

	int result = Factorial(select);

	printf("result ������ �� : %d", result);
}