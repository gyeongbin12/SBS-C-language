#include <stdio.h>
<<<<<<< HEAD
#include <conio.h>
#include <windows.h>

// ���� �μ���?
/*
// �μ��� ������ Ÿ���� �̸� ������ ���� ���� �μ��Դϴ�.

// ���� �μ��� ����� ���ؼ� �ڷ����� �������־�� �մϴ�.

void Function(int x,...)
{
	va_list pointer; // ���� �μ��� ��� ������

	__crt_va_start(pointer, x); // ���� �μ� ��� ������ ����

	// ���� �μ�(x)�� ������ŭ �ݺ��ϵ��� �����մϴ�.
	for (int i = 0; i < x; i++)
	{
		int value = __crt_va_arg(pointer, int); // int ũ�⸸ũ�� �μ� ��� �����Ϳ��� ���� �����ɴϴ�.

		//pointer�� int ũ ���������� �̵��մϴ�.
		printf("%d\n", value);
	}

	__crt_va_end(pointer); // ���� �μ� ��� �����͸� NULL �ʱ�ȭ�մϴ�.
}
*/

// ��ǥ ���� X�� Y���� �޴� �Լ��Դϴ�.
void gotoXY(int x, int y)
{
	// x�� y ��ǩ���� �����մϴ�.
	COORD position = { x, y }; 

	// ��ǥ ��ġ�� �̵������ִ� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

=======
#include <math.h> // ���� ���� ��� ����

struct Player
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};
>>>>>>> 753936ae4e88a7107955376a86123f46933f71fb

void ParameterArray(int array[])
{
<<<<<<< HEAD
	// �����μ�
	/*
	// Function �̶�� �Լ��� �ϳ��� �Ű� ������ ������ �ֱ� ������ �ϳ��� �μ��� ������ �� �ֽ��ϴ�.
	Function(4,20,30,40,50);

	// x �Ű� ������ ���� �ּҰ� ����˴ϴ�.
	// ���� �μ��� �������� �޸� ������ �����ϴ�.

	// printf( )�Լ��� �μ��� ��� ���������� ���� �� �ֽ��ϴ�.
	// printf("%d%d%d%d", 20, 30, 40, 50);
	*/

	// ��ǥ ������ �����մϴ�.
	int x = 5, y = 5;

	// Ű �Է��� �� �����Ӹ��� �Է��� �Ǿ�� �մϴ�.
	while (1)
	{
		// Ű �Է�
		// ����ŷ
		// Ű �Է��� ���� �ʾƵ� �ٸ� �۾��� ����� �� �ֽ��ϴ�.
		 
		// (VK_DOWN) : Ű����Ʒ�Ű�� ������ �� ����Ǵ� �Լ�
		if (GetAsyncKeyState(VK_DOWN))
		{
			y++;

			Sleep(100); // 0.1�� ���� ���
			            // Sleep : 1/1000�� ������ ����մϴ�.
		}

		// ��ǥ�� (5, 5)�� �����մϴ�
		gotoXY(x, y);

		// ��ǥ ������ �޾Ƽ� ����� �ؽ�Ʈ�� ��Ÿ���ϴ�.	
		printf("��");

		// system(cls) : ȭ�� ��ü�� ����� �Լ��Դϴ�.
		system("cls");

		// ���� vs �񵿱�

		// ���ŷ
		// Ű �Է��� ���� ������ ��� ����մϴ�.
	}

	return 0;
}
=======
	for (int i = 0; i < 5; i++)
	{
		array[i] = 10;
	}
}


int main()
{
	// �� �� ������ �Ÿ�
	/*
	struct Player character = {0, 0};
	struct Monster dragon = {3, 5};
	// character�� dragon�� �Ÿ��� �����ּ���.
	printf
	(
		"�� �� ������ �Ÿ� : %lf",
		sqrt(pow(character.x - dragon.x, 2) + pow(character.y - dragon.y, 2))
	);
	*/

	// Lvalue vs Rvalue
	/*
	// Lvalue��?
	// ǥ���� ���Ŀ��� ������� �ʴ� ���̸�, �̸��� ���ϰ� �ִ� �����Դϴ�.
	// Rvalue��?
	// ǥ���� ���Ŀ� ������� ���̸�, �ӽ� �����Դϴ�.
	// 10,20 <- Rvalue
	// a, b <- Lvalue
	// Lvalue�� Rvalue�ε� ����� �� �ֽ��ϴ�.
	int a = 10;
	int b = 20;

	// a + b : �ӽ� �����Դϴ�.
	int result = a + b;
	// Lvalue�� ����� ����� �� �����ϴ�.
	// 10 = a;
	// a + b = 10;
	printf("result�� ������ �� : %d", result);
	// ���� ����, ���� ����
	// ���� �������� ��쿡�� Lvalue�� Rvalue�� ����� �� �ֽ��ϴ�.
	// ���� �������� ��쿡�� Rvalue�θ� ����� �����մϴ�.
	int x = 0;
	int y = 0;
	// ���� ������ ������ �ڱ� �ڽ�(����)�� ��ȯ�մϴ�.
	++y;
	// ���� ������ ������ ���纻�� ��ȯ�մϴ�.
	x++;
	*/

	// [0] [0] [0] [0] [0]
	int room[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}

	// room�̶�� �̸��� �迭�� ���� �ּҸ� �ǹ��մϴ�.
	ParameterArray(room);

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}


	return 0;
}
>>>>>>> 753936ae4e88a7107955376a86123f46933f71fb
