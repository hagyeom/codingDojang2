#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
	char name[30];
	int age;
};

int main() {
	struct Person* p[5];
    int maxAgeIndex = 0;

    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
    {
        p[i] = (struct Person*)malloc(sizeof(struct Person));
        scanf("%s%d", p[i]->name, &(p[i]->age));
    }

    for (int i = 1; i < sizeof(p) / sizeof(struct Person*); i++)
    {
        if (p[i]->age > p[maxAgeIndex]->age)
        {
            maxAgeIndex = i;
        }
    }

    printf("%s\n", p[maxAgeIndex]->name);

	for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++) {
		free(p[i]);
	}

	return 0;
}