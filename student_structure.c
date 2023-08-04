#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //malloc함수가 포함된 헤더파일

struct Student {
	int id;
	char name[20];
	double score;
};

int main(void) {

	/*
	* c언어에서 단일문자는 char에 저장. 근데 홑따옴표로 감싸야돼 %c
	* 문자열은 char* 혹은 char[] 에 저장하는데, 얘는 쌍따옴표 %s
	*/
	struct Student* stu = (struct Student*)malloc(sizeof(struct Student));
	printf("숫자로 된 id, 이름, 점수를 차례대로 입력해주세요.\n");
	scanf("%d %s %lf", &stu->id, stu->name, &stu->score);
	printf("id : %d\nname : %s\nscore : %.2lf\n",
		stu->id, stu->name, stu->score);

	

}