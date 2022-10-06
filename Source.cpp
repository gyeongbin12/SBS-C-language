#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 텍스트 파일을 불러오는 함수
void LoadFile(const char* text)
{
	FILE* file = fopen(text, "r");

	char buffer[10000] = { 0, };

	fread(buffer, 1, 10000, file);

	printf("%s", buffer);

	fclose(file);
}

int main()
{
	// 서울 2033 게임
	/*
	int scene = 1;

	switch (scene)
	{
	case 1: // 첫번째 맵
		LoadFile("Resource/tttttttt.txt");
	case 2: // 두번째 맵
		LoadFile("Resource/tttttttt1.txt");
	case 3: // 세번째 맵
		LoadFile("Resource/tttttttt2.txt");
	case 4: // 네번째 맵
		LoadFile("Resource/tttttttt3.txt");
	case 5: // 다섯번째 맵
		LoadFile("Resource/tttttttt4.txt");
	}
	*/

	// 오븐 시계
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

	return 0;
}
