#include <stdio.h>
int main() {
    char name[50];
    int rollNumber;
    printf("Enter your name: ");
    gets(name);
    printf("Enter your roll number: ");
    scanf("%d", &rollNumber);
    printf("\nName: %s\n", name);
    printf("Roll Number: %d\n", rollNumber);
    return 0;
}
