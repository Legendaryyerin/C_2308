#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	printf("�н�����~ �Է��ϼſ�. ����� �ҹ��� 4���ڸ� ��������.\n");
	//�ƽ�Ű�ڵ�! �̿����� ��ҹ��� �Ǻ��Ϸ��� ����.

	char pwd[5];
	char check[5];
	int i, j = 0;
	int cnt = 0;
	scanf("%s", pwd);

	if (strlen(pwd) != 4)
	{
		printf("���� �ҹ��� 4���ڸ� �ȴٰ� ���ݾƿ�. �ٽ�. ���� �Ѽ� ���Է� �ٷ���.\n");
		return 1;
	}
	for (int i = 0; i < 4; i++)
	{
		if (pwd[i] >= 'a' && pwd[i]<= 'z') {
			cnt++;	
		}
	}
	printf("\n��. �н����� �ԷµǾ����ϴ�~ \n");
	
	if(cnt != 4){
		printf("�ƴ� �ٵ�; ���� �ҹ��� 4���ڸ� �ȴٰ� ���ݾƿ�. �ٽ�. ���� �Ѽ� ���Է� �ٷ���.\n");
		return 1;
	}
	printf("�н����� Ȯ���ҰԿ�~ �� �� �� �Է����ּ���. \n ");
	scanf("%s", check);
	
	for (i = 0; i < 4; i++) {
		if (pwd[i] != check[i]) {
			printf("Ʋ�Ⱦ��! ����� Ʋ�Ƚ��ϴ�!\n");
			return -1;
		}
	}
	printf("��й�ȣ^^ �Ϻ������Ǿ����^^\n");
	return 0;

}