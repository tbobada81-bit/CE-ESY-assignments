#include <stdio.h>
#include <string.h>

#define SIZE 5

char buffer[SIZE];
int start = 0;
int end = 0;
int elements = 0;

void reset() {
    start = 0;
    end = 0;
    elements = 0;
}

int empty() {
    return elements == 0;
}

int full() {
    return elements == SIZE;
}

void insert(char x) {
    if (full()) {
        printf("Buffer full!\n");
        return;
    }

    buffer[end] = x;
    end = (end + 1) % SIZE;
    elements++;
}

char removeChar() {
    if (empty()) {
        printf("Buffer empty!\n");
        return '\0';
    }

    char x = buffer[start];
    start = (start + 1) % SIZE;
    elements--;

    return x;
}

int main() {

    char name[50];

    reset();

    printf("Type your name: ");
    scanf("%s", name);

    strcat(name, "CE-ESY");

    for (int i = 0; name[i] != '\0'; i++) {
        insert(name[i]);
    }

    printf("Final output: ");

    while (!empty()) {
        printf("%c", removeChar());
    }

    printf("\n");

    return 0;

}
