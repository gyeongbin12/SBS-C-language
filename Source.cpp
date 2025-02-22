﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <conio.h>

// 텍스트 파일을 불러오는 함수
void LoadFile(const char* text)
{
	FILE* file = fopen(text, "r");

	char buffer[10000] = { 0, };

	fread(buffer, 1, 10000, file);

	printf("%s", buffer);

	fclose(file);
}

void gotoXY(int x, int y)
{
	// x와 y 좌푯값을 설정합니다.
	COORD position = { x, y };

	// 좌표 위치를 이동시켜주는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	// 서울 2033 게임
	int x = 15, y = 80;

	int scene = 1;

	char key;

	while (1)
	{
		
		switch (scene)
		{
		case 1: // 첫번째 맵
			LoadFile("Resource/tttttttt.txt");
			break;
		case 2: // 두번째 맵
			LoadFile("Resource/qqq.txt");
			break;
		case 3: // 세번째 맵
			LoadFile("Resource/eee.txt");
			break;
		}
		gotoXY(20, y);
		printf("사람");

		gotoXY(85, y);
		printf("강아지");

		gotoXY(x, y);
		printf("☞");

		key = _getch();

		switch (key)
		{

			case 75 :
			{
				if (x > 15) x -= 65;
				break;
			}
			case 77 :
			{
				if (x < 80) x += 65;
				break;
			}
		}

		if (GetAsyncKeyState(VK_SPACE))
		{
			scene++;
		}

		system("cls");

	}

	

	// 오븐 시계
	/*
	int hour = 0;
	int minute = 0;
	int timer = 0;

	// 몇시, 몇분, 추가적으로 들어가는 몇분
	scanf_s("%d%d%d", &hour, &minute, &timer);

	minute += timer;

	if (minute > 59)
	{
		while (minute >= 60)
		{
			minute = minute - 60;
			hour++;
		}

		if (hour >= 24)
		{
			hour -= 24;
		}
	}

	printf("%d시 %d분", hour, minute);
	*/

	return 0;
}
