// 16. Create calculator using switch case.

#include <stdio.h>

int main(){
    printf("Enter two numbers\n");
    float a, b, ans;
    scanf("%f %f", &a, &b);

    printf("Enter operator ");

    char op;
    scanf("%c" , &op);

    switch (op) {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
        break;

    default:
        printf("invalid operator");
        break;
    }

    printf("%f" , ans);

    return 0;
}