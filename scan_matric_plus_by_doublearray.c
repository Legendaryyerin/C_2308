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
	


	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			int temp_A,temp_B  = 0;
			printf("A[%d][%d]�� ���� �Է����ּ���.\n", i, j);
			scanf("%d", &temp_A);
			printf("B[%d][%d]�� ���� �Է����ּ���.\n", i, j);
			scanf("%d", &temp_B);
			A[i][j] = temp_A;
			B[i][j] = temp_B;
			temp_A, temp_B = 0;
			
		}
		
	}



	for (int i = 0; i < 3; i++) //A, B �迭�� ���� ����
	{
		for (int j = 0; j < 3; j++)
		{
			ret[i][j] = A[i][j] + B[i][j];
			printf("A[%d][%d] + B[%d][%d]�� ����, %d.\n", i, j, i, j, ret[i][j]);
		}
		printf("\n");
	}

}
