
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
struct login
{
	char id[20];
	int pwd;
};

int main(void) {

	struct login id;
	struct login pwd;

	printf("������ �����ϰڽ��ϴ�. id�� pwd�� ���ʷ� �Է����ּ���.\n");


	scanf("%c %d", &id, &pwd);

	printf("id�� %c, pwd�� %d�Դϴ�.", &id, &pwd);
	return 0;
}
*/
struct login {

	char id[20];
	int pwd;
}temp;

int main(void) {

	struct login temp;

	printf("id���Է����ּ���.\n");
	scanf("%s", &temp.id);

	printf("pwd���Է����ּ���.\n");
	scanf("%d", &temp.pwd);

	printf("id�� %s�̰�, pwd�� %d�Դϴ�.\n", &temp.id, &temp.pwd);


	return 0;
}