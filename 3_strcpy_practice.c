#include <stdio.h>
#include <string.h>


int main() {

	char str1[20];
	char str2[20] = "";
	char str3[20] = "";

	printf("�ȳ��ϼ���~ 20���� �̸��� ���ڿ��� �Է����ּſ�~\n");

	scanf("%s", str1);

	strcpy(str2, str1);
	printf("\"%s\"�� �Է��ϼ̱���!\n", str2);

	strncpy(str3, str1, 5);
	printf("�ٵ� ���� �����Ѱ� �� �� �� �� �� 5���� �����Կ�. \n %s", str3);

	
}