/* ~�ڵ弳�� time~
1.����ڿ��� 5�� ���ڰ��� �Է¹���.
2. �Է¹��� ��� �� ���.
3. �������� ����ؼ�, ���� ū �� �����.
4. �ߺ��� �Է°� ���.
*/

#include <stdio.h>
#include <string.h>

int main() {
	int num[5];
	int i, max = 0;
	int j = 0;

	for (i = 0; i < 5; i++) {
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &num[i]);;
	}

	printf("\n����� �Է��� ���ڵ��� �����帮�ڽ��ϴ�. \n");
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
			printf("\n%d�� �ߺ��� ���Դϴ�.", num[i]);
		}
	}

	printf("\n�� �� ���� ū ����, %d �Դϴ�.", num[4]);
	return 0;
}