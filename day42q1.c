//Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];

	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int length = strlen(str);
	for (int i = 0; i < length / 2; i++) {
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}

	printf("%s\n", str);

	return 0;
}
