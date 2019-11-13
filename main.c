#include <stdio.h>
#include <string.h>

int main(void) {
	printf("gym-c\n");

	// Main program loop
	char input[30];
	while(1) {
		int result = scanf("%s", input);
		if (input != NULL && result != EOF) {
			if (strcmp(input, "quit") != 0) {
				printf("%s\n", input);
			}
			else {
				break;
			}
		}
	}

	return 0;
}
