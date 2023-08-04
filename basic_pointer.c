#include <stdio.h>
#include <string.h>

char* read_input(char* buffer, int max_length) {
	return fgets(buffer, max_length, stdin);
}

int main(){
	char buffer[100];
	char* (*read_input_ptr)(char*, int);
	read_input_ptr = &read_input;
	printf("Enter a string : ");
	read_input_ptr(buffer, sizeof(buffer));
	printf("you entered : %s", buffer);
	return 0;
}