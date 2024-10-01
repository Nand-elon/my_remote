#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Sort the string
    qsort(str, strlen(str), sizeof(char), compare);

    printf("Sorted string: %s\n", str);
    return 0;
}
