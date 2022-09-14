﻿#include <stdio.h>

// 열거형이란?
/*
// 반드시 하나의 값만 가지게 될 변수들을 모아놓은 집합제입니다.

// Day라는 열거형이 생성됩니다.
// 열거형은 정수값으로 정의할 수 없습니다.
enum State
{
	// 열거형의 초기값을 명시하지 않으면 가장 처음에 있는열거형 멤버 변수는 0 이라는 값으로 초기화됩니다.
	IDLE, // <- 가장 먼저 선언한 열거형 변수가 첫 번째 멤버 변수입니다.
	ATTACK, // 열거형에 값을 변경할 수 있지만, 그 뒤에 있는 열거형 멤버 변수들의 값도 함께 바뀝니다.
	JUMP,
	DEATH
};
*/

int main()
{
	// 열거형 변수를 선언합니다.
	/*
	enum State state;

	// 캐맅거 상태를 대기 상태로 처음에 지정합니다.
	state = IDLE;

	switch (state)
	{
		case IDLE: printf("대기상태");
			break;
		case ATTACK: printf("공격상태");
			break;
		case JUMP: printf("점프상태");
			break;
		case DEATH: printf("죽음상태");
			break;
	}
	*/

	return 0;
}
