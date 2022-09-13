#include <stdio.h>
<<<<<<< HEAD
#include <conio.h>
#include <windows.h>

// 가변 인수란?
/*
// 인수의 개수와 타입이 미리 정해져 있지 않은 인수입니다.

// 가변 인수를 만들기 위해서 자료형을 선언해주어야 합니다.

void Function(int x,...)
{
	va_list pointer; // 가변 인수의 목록 포인터

	__crt_va_start(pointer, x); // 가변 인수 목록 포인터 설정

	// 가변 인수(x)의 갯수만큼 반복하도록 설정합니다.
	for (int i = 0; i < x; i++)
	{
		int value = __crt_va_arg(pointer, int); // int 크기만크변 인수 목록 포인터에서 값을 가져옵니다.

		//pointer는 int 크 순방향으로 이동합니다.
		printf("%d\n", value);
	}

	__crt_va_end(pointer); // 가변 인수 목록 포인터를 NULL 초기화합니다.
}
*/

// 좌표 정보 X와 Y값을 받는 함수입니다.
void gotoXY(int x, int y)
{
	// x와 y 좌푯값을 설정합니다.
	COORD position = { x, y }; 

	// 좌표 위치를 이동시켜주는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

=======
#include <math.h> // 수학 관련 헤더 파일

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
	// 가변인수
	/*
	// Function 이라는 함수는 하나의 매개 변수를 가지고 있기 떄문에 하나의 인수만 전달할 수 있습니다.
	Function(4,20,30,40,50);

	// x 매개 변수의 시작 주소가 저장됩니다.
	// 가변 인수는 연속적인 메모리 공간을 가집니다.

	// printf( )함수는 인수를 계속 가변적으로 받을 수 있습니다.
	// printf("%d%d%d%d", 20, 30, 40, 50);
	*/

	// 좌표 정보를 설정합니다.
	int x = 5, y = 5;

	// 키 입력은 매 프레임마다 입력이 되어야 합니다.
	while (1)
	{
		// 키 입력
		// 논블로킹
		// 키 입력을 하지 않아도 다른 작업이 실행될 수 있습니다.
		 
		// (VK_DOWN) : 키보드아래키를 눌렀을 때 실행되는 함수
		if (GetAsyncKeyState(VK_DOWN))
		{
			y++;

			Sleep(100); // 0.1초 동안 대기
			            // Sleep : 1/1000의 단위로 계산합니다.
		}

		// 좌표를 (5, 5)를 설정합니다
		gotoXY(x, y);

		// 좌표 정보를 받아서 출력할 텍스트를 나타냅니다.	
		printf("ㅇ");

		// system(cls) : 화면 전체를 지우는 함수입니다.
		system("cls");

		// 동기 vs 비동기

		// 블로킹
		// 키 입력을 받을 때까지 계속 대기합니다.
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
	// 두 점 사이의 거리
	/*
	struct Player character = {0, 0};
	struct Monster dragon = {3, 5};
	// character와 dragon의 거리를 구해주세요.
	printf
	(
		"두 점 사이의 거리 : %lf",
		sqrt(pow(character.x - dragon.x, 2) + pow(character.y - dragon.y, 2))
	);
	*/

	// Lvalue vs Rvalue
	/*
	// Lvalue란?
	// 표현식 이후에도 사라지지 않는 값이며, 이름을 지니고 있는 변수입니다.
	// Rvalue란?
	// 표현식 이후에 사라지는 값이며, 임시 변수입니다.
	// 10,20 <- Rvalue
	// a, b <- Lvalue
	// Lvalue는 Rvalue로도 사용할 수 있습니다.
	int a = 10;
	int b = 20;

	// a + b : 임시 변수입니다.
	int result = a + b;
	// Lvalue에 상수를 사용할 수 없습니다.
	// 10 = a;
	// a + b = 10;
	printf("result의 변수의 값 : %d", result);
	// 전위 증감, 후위 증감
	// 전위 증감같은 경우에는 Lvalue랑 Rvalue로 사용할 수 있습니다.
	// 후위 증감같은 경우에는 Rvalue로만 사용이 가능합니다.
	int x = 0;
	int y = 0;
	// 전위 증가는 증가된 자기 자신(변수)을 반환합니다.
	++y;
	// 후위 증가는 증가된 복사본을 반환합니다.
	x++;
	*/

	// [0] [0] [0] [0] [0]
	int room[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}

	// room이라는 이름은 배열의 시작 주소를 의미합니다.
	ParameterArray(room);

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d  ", room[i]);
	}


	return 0;
}
>>>>>>> 753936ae4e88a7107955376a86123f46933f71fb
