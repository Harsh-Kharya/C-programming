//Input sides of triangle, then tell its type (Scalene, Isosceles or Equilateral).
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter side A: ");
    scanf("%d", &a);
    printf("Enter side B: ");
    scanf("%d", &b);
    printf("Enter side C: ");
    scanf("%d", &c);
    if ((a == b) && (b == c) && (c == a)) {
        printf("The triangle is Equilateral.");
    }
    else if ((a == b) || (b == c) || (c == a)) {
        printf("The triangle is Isosceles.");
    }
    else if ((a != b) && (b != c) && (c!= a)) {
        printf("The triangle is Scalene.");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}