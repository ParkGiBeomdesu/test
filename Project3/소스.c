#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
	char a[SIZE] = { 0 };
	int b[123] = { 0 };

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(a, SIZE - 1);

	for (int i = 0;i < strlen(a);i++) {
		b[a[i]]++;
	}

	for (int j = 'a';j <= 'z';j++) {
		if (b[j] != 0) {
			printf("%c ���ڰ� %d�� �����Ͽ���!\n", j, b[j]);
		}
	}

	printf("\n20244347 ��ǻ�Ͱ��а� �ڱ��");

	return 0;
}