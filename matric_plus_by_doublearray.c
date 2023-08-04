//1. 일차원배열 하나씩 scanf받은 다음 
//	그배열을 이차원배열에 넣는건?
//2. 처음부터 이차원배열 만들어서, temp배열에 내부배열값 받아서,
// 
//	배열 내부의 배열에 옮겨넣기..



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main() {


	int A[3][3] = { {0,0,0} }; //이중배열
	int B[3][3] = { {0,0,0} }; 

	int ret[3][3] = { {0,} };
	int status = 0;

	srand(time(NULL));

	for (int i = 0; i < 3; i++) //A, B배열에 랜덤값 넣어서 꽉채우기
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



	for (int i = 0; i < 3; i++) //A, B 배열값 각각 덧셈
	{
		for (int j = 0; j < 3; j++)
		{
			ret[i][j] = A[i][j] + B[i][j];
			printf("[%d] + [%d] = %d\n", A[i][j], B[i][j], ret[i][j]);
		}
		printf("\n");
	}
	
}
