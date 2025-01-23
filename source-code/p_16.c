// 16. Create calculator using switch case.

#include <stdio.h>

int main(){
    
    printf("Enter operator ");
    char op;
    scanf("%c" , &op);

    printf("Enter two numbers\n");
    float a, b, ans;
    scanf("%f %f", &a, &b);


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

/*
OUTPUT:

Enter operator *
Enter two numbers
12 14
168.000000
*/