#pragma once
#include <stdio.h>
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

int main()
{
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

	int key = 0;

	// Ű �Է��� �� �����Ӹ��� �Է��� �Ǿ�� �մϴ�.
	while (1)
	{
		// Ű �Է�
		/*
		// ����ŷ
		// Ű �Է��� ���� �ʾƵ� �ٸ� �۾��� ����� �� �ֽ��ϴ�.

		// (VK_DOWN) : Ű����Ʒ�Ű�� ������ �� ����Ǵ� �Լ�
		if (GetAsyncKeyState(VK_DOWN))
		{
			y++;

			Sleep(100); // 0.1�� ���� ���
						// Sleep : 1/1000�� ������ ����մϴ�.
		}

		if (GetAsyncKeyState(VK_UP))
		{
			y--;

			// y ������ 0���� �۾����ٸ� y ������ 0���� �����մϴ�.
			if (0 >= y)
			{
				y = 0;

			}

			Sleep(100);

		}
		if (GetAsyncKeyState(VK_LEFT))
			x--;

			//
			if (0 >= x);
			{
			x = 0;

			Sleep(100);

			}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			x++;

		}
		Sleep(100);
	}

		// ��ǥ�� (5, 5)�� �����մϴ�
		gotoXY(x, y);

		// ��ǥ ������ �޾Ƽ� ����� �ؽ�Ʈ�� ��Ÿ���ϴ�.
		printf("��");
		Sleep(100);

		// system(cls) : ȭ�� ��ü�� ����� �Լ��Դϴ�.
		system("cls");
		*/

		// ���ŷ
		/*
		// Ű �Է��� ���� ������ ��� ����ϰ� �ٸ� �۾��� ������� �ʽ��ϴ�.

		// kbhit : Ű���� �Է��� �Ǿ��ٸ�
		// ��ĵ �ڵ��?
		// ��� Ű�� ���������� �����ϱ� ���� ��κ��� ��ǻ�� Ű���尡 ��ǻ�ͷ� ������ �������Դϴ�.

		// ��ǥ�� (5, 5)�� �����մϴ�
		gotoXY(x, y);

		// ��ǥ ������ �޾Ƽ� ����� �ؽ�Ʈ�� ��Ÿ���ϴ�.
		printf("��");

		// _getch �Լ��� Ű �Է��� ���� �� ���� ����մϴ�.
		key = _getch();

		switch (key)
		{
			case 72: y--;
				break;
			case 75: x--;
				break;
			case 77: x++;
				break;
			case 80: y++;
				break;


		}

		// system(cls) : ȭ�� ��ü�� ����� �Լ��Դϴ�.
		system("cls");
	}
	*/

		return 0;

	}
