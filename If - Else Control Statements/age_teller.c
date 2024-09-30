/*This program inputs age, then prints:
0 - 12: Child
13 - 19: Teenager
19+: Adult*/
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if ((age <= 12) && (age >= 0)) {
        printf("You are a child.");
    }
    else if ((age >= 13) && (age <=19)) {
        printf("You are a teenager.");
    }
    else if (age > 19) {
        printf("You are an adult.");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}