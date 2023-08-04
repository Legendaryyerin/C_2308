#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	printf("패스워드~ 입력하셔요. 영어로 소문자 4글자만 가능혀요.\n");
	//아스키코드! 이용혀서 대소문자 판별하려고 혀요.

	char pwd[5];
	char check[5];
	int i, j = 0;
	int cnt = 0;
	scanf("%s", pwd);

	if (strlen(pwd) != 4)
	{
		printf("영어 소문자 4글자만 된다고 했잖아요. 다시. 껐다 켜서 재입력 바래요.\n");
		return 1;
	}
	for (int i = 0; i < 4; i++)
	{
		if (pwd[i] >= 'a' && pwd[i]<= 'z') {
			cnt++;	
		}
	}
	printf("\n예. 패스워드 입력되었읍니다~ \n");
	
	if(cnt != 4){
		printf("아니 근데; 영어 소문자 4글자만 된다고 했잖아요. 다시. 껐다 켜서 재입력 바래요.\n");
		return 1;
	}
	printf("패스워드 확인할게요~ 한 번 더 입력해주세요. \n ");
	scanf("%s", check);
	
	for (i = 0; i < 4; i++) {
		if (pwd[i] != check[i]) {
			printf("틀렸어요! 당신은 틀렸습니다!\n");
			return -1;
		}
	}
	printf("비밀번호^^ 완벽설정되었어요^^\n");
	return 0;

}