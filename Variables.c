#include <stdio.h>

int main()
{
    char name[] = "Hardik";
    int age = 18;
    float height = 5.8;
    char grade = 'A';

    printf("===== My Information =====\n\n");

    printf("Name   : %s\n", name);
    printf("Age    : %d\n", age);
    printf("Height : %.1f Feet\n", height);
    printf("Grade  : %c\n", grade);

    return 0;
}