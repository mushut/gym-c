#include <stdio.h>
#include <string.h>

struct exercise {
	char *name;
	int series;
	int reps;
	int weight;
};

struct exercises {
	struct exercise *allExercises;
	char *date;
	int durationInMinutes;
};

int adding(void) {
	printf("Adding exercises\n");

	return 0;
}

int main(void) {
	printf("gym-c\n");

	// Main program loop
	char input[30];
	while(1) {
		int result = scanf("%s", input);
		if (input != NULL && result != EOF) {
			if (strcmp(input, "quit") != 0) {
				printf("%s\n", input);
				if (strcmp(input, "add") == 0) {
					adding();
				}
			}
			else {
				break;
			}
		}
	}

	return 0;
}
