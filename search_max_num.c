/* ~코드설명 time~
1.사용자에게 5개 숫자값을 입력받음.
2. 입력받은 모든 값 출력.
3. 버블정렬 사용해서, 가장 큰 값 출력함.
4. 중복된 입력값 출력.
*/

#include <stdio.h>
#include <string.h>

int main() {
	int num[5];
	int i, max = 0;
	int j = 0;

	for (i = 0; i < 5; i++) {
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &num[i]);;
	}

	printf("\n당신이 입력한 숫자들을 보여드리겠습니다. \n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", num[i]);
	}
/*
	for (i = 0; i < 5; i++) {

		for (j = 0; j < 4 - i; j++) {

			if (num[j] > num[j + 1]) {
				int temp = 0;
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
*/
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (num[j] > num[j + 1]) {
				int temp = 0;
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		if (num[i] == num[i + 1]) {
			printf("\n%d는 중복된 값입니다.", num[i]);
		}
	}

	printf("\n이 중 가장 큰 수는, %d 입니다.", num[4]);
	return 0;
}