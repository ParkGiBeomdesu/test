#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
	char a[SIZE] = { 0 };
	int b[123] = { 0 };

	printf("텍스트를 입력하시오: ");
	gets_s(a, SIZE - 1);

	for (int i = 0;i < strlen(a);i++) {
		b[a[i]]++;
	}

	for (int j = 'a';j <= 'z';j++) {
		if (b[j] != 0) {
			printf("%c 문자가 %d번 등장하였음!\n", j, b[j]);
		}
	}

	printf("\n20244347 컴퓨터공학과 박기범");

	return 0;
}