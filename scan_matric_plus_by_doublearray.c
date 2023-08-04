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
	


	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			int temp_A,temp_B  = 0;
			printf("A[%d][%d]의 값을 입력해주세요.\n", i, j);
			scanf("%d", &temp_A);
			printf("B[%d][%d]의 값을 입력해주세요.\n", i, j);
			scanf("%d", &temp_B);
			A[i][j] = temp_A;
			B[i][j] = temp_B;
			temp_A, temp_B = 0;
			
		}
		
	}



	for (int i = 0; i < 3; i++) //A, B 배열값 각각 덧셈
	{
		for (int j = 0; j < 3; j++)
		{
			ret[i][j] = A[i][j] + B[i][j];
			printf("A[%d][%d] + B[%d][%d]의 값은, %d.\n", i, j, i, j, ret[i][j]);
		}
		printf("\n");
	}

}
