
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

	printf("계정을 생성하겠습니다. id와 pwd를 차례로 입력해주세요.\n");


	scanf("%c %d", &id, &pwd);

	printf("id는 %c, pwd는 %d입니다.", &id, &pwd);
	return 0;
}
*/
struct login {

	char id[20];
	int pwd;
}temp;

int main(void) {

	struct login temp;

	printf("id를입력해주세요.\n");
	scanf("%s", &temp.id);

	printf("pwd를입력해주세요.\n");
	scanf("%d", &temp.pwd);

	printf("id는 %s이고, pwd는 %d입니다.\n", &temp.id, &temp.pwd);


	return 0;
}