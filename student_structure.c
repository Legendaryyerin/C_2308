#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //malloc�Լ��� ���Ե� �������

struct Student {
	int id;
	char name[20];
	double score;
};

int main(void) {

	/*
	* c���� ���Ϲ��ڴ� char�� ����. �ٵ� Ȭ����ǥ�� ���ξߵ� %c
	* ���ڿ��� char* Ȥ�� char[] �� �����ϴµ�, ��� �ֵ���ǥ %s
	*/
	struct Student* stu = (struct Student*)malloc(sizeof(struct Student));
	printf("���ڷ� �� id, �̸�, ������ ���ʴ�� �Է����ּ���.\n");
	scanf("%d %s %lf", &stu->id, stu->name, &stu->score);
	printf("id : %d\nname : %s\nscore : %.2lf\n",
		stu->id, stu->name, stu->score);

	

}