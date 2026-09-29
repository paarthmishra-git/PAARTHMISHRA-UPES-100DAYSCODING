//Check whether a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int is_palindrome = 1;

	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int length = strlen(str);
	for (int i = 0; i < length / 2; i++) {
		if (str[i] != str[length - i - 1]) {
			is_palindrome = 0;
			break;
		}
	}

	if (is_palindrome) {
		printf("Palindrome\n");
	} else {
		printf("Not palindrome\n");
	}

	return 0;
}
