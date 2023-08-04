#include <stdio.h>
#include <string.h>

int main() {
	char arr[5] = { 'A','B','C','D' };

	printf("length = %d\n", strlen(arr));
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c\n", arr[i]);
	}
	return 0;
}