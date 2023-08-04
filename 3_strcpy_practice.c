#include <stdio.h>
#include <string.h>


int main() {

	char str1[20];
	char str2[20] = "";
	char str3[20] = "";

	printf("안녕하세요~ 20글자 미만의 문자열을 입력해주셔요~\n");

	scanf("%s", str1);

	strcpy(str2, str1);
	printf("\"%s\"을 입력하셨군요!\n", str2);

	strncpy(str3, str1, 5);
	printf("근데 저는 간결한게 좋 아 서 ㅋ ㅋ 5개만 뽑을게요. \n %s", str3);

	
}