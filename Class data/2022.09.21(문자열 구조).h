#pragma once
#include <stdio.h>
#include <string.h>

void Mystrcat(char* str1, const char* str2)
{
	// str1�� NULL���ڰ� �ƴ϶��
	while (*str1 != '\0')
	{
		// str1�� ����Ű�� �����͸� ������ŵ�ϴ�.
		str1++;
	}

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
}

int main()
{
	// strcmp ���ڿ� �� �Լ�
	/*
	char memory1[] = { "ABCE" };
	char memory2[] = { "ABCT" };
	char memory3[] = { "ABCC" };

	// strcmp�� ù��° ���ڿ����� ũ�Ⱑ ũ�ٸ� ���(+1)�� ��ȯ�մϴ�.
	// �׷��� �ι�° ���ڿ��� ũ�Ⱑ ũ�ٸ� ����(-1)�� ��ȯ�մϴ�.
	// ���࿡ �� ���� ���ڿ��� ũ�Ⱑ ���ٸ� 0�� ��ȯ�մϴ�.
	printf(" �� ���� ���ڿ��� ���� �� : %d\n", strcmp(memory1, memory2));
	printf(" �� ���� ���ڿ��� ���� �� : %d\n", strcmp(memory1, memory3));

	// strcmp ���� ���� ������ �켱 ������ �����˴ϴ�.

	// strncmp : ù��° �Ű������� ���� ���ڿ�
	// strncmp : �ι�° �Ű������� ���� ���ڿ�
	// strncmp : ����° ���� ���ڿ��� ����

	// ABC == ABC = 0
	strcmp(memory1, memory2, 5);
	printf(" �� ���� ���ڿ��� ���� �� : %d\n", strncmp(memory1, memory2, 3));
	*/

	// strcat ���ڿ� ���� �Լ�
	char name1[10] = { "Kim" };
	char name2[] = { "Geum" };

	// strcat���� ��쿡�� ������� ���ڿ��� ũ�⸦ �˳��� �������־�� �մϴ�.
	// strcat_s(name1, 10, name2);
	// printf("name1�� ���ڿ� : %s\n", name1);

	Mystrcat(name1, name2);

	printf("%s", name1);

	return 0;
}
