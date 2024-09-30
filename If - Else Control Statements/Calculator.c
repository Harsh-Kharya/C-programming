#include <stdio.h>

int main() {
    char o;
    printf("Enter operator (+/-/*//): ");
    scanf("%c", &o);
    float num1, num2;
    printf("Enter 1st number: ");
    scanf("%f", &num1);
    printf("Enter 2nd number: ");
    scanf("%f", &num2);
    if (o == '+') {
        printf("%.2f", num1 + num2);
    }
    else if (o == '-') {
        printf("%.2f", num1 - num2);
    }
    else if (o == '*') {
        printf("%.2f", num1 * num2);
    }
    else if (o == '/') {
        printf("%.2f", num1 / num2);
    }
    return 0;
}