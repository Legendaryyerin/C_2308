//1. �������迭 �ϳ��� scanf���� ���� 
//	�׹迭�� �������迭�� �ִ°�?
//2. ó������ �������迭 ����, temp�迭�� ���ι迭�� �޾Ƽ�,
// 
//	�迭 ������ �迭�� �Űֱܳ�..



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main() {


	int A[3][3] = { {0,0,0} }; //���߹迭
	int B[3][3] = { {0,0,0} }; 

	int ret[3][3] = { {0,} };
	int status = 0;

	srand(time(NULL));

	for (int i = 0; i < 3; i++) //A, B�迭�� ������ �־ ��ä���
	{
		for (int j = 0; j < 3; j++)
		{
			if (status == 0)
			{
				A[i][j] = rand() % 10 + 1;
				B[i][j] = rand() % 10 + 1;
			}
		}
	}



	for (int i = 0; i < 3; i++) //A, B �迭�� ���� ����
	{
		for (int j = 0; j < 3; j++)
		{
			ret[i][j] = A[i][j] + B[i][j];
			printf("[%d] + [%d] = %d\n", A[i][j], B[i][j], ret[i][j]);
		}
		printf("\n");
	}
	
}
