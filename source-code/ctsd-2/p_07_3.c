/*
Use typedef to create an alias for a structure representing a
complex number and perform addition of two complex numbers.
*/

#include <stdio.h>

typedef struct
{
    int real;
    int imag;
} Complex;

Complex sum(Complex c1, Complex c2)
{
    Complex output;

    output.real = c1.real + c2.real;
    output.imag = c1.imag + c2.imag;

    return output;
}

int main()
{
    Complex comp1, comp2, result;

    printf("Enter the first complex number's real and imaginary part: ");
    scanf("%d %d", &comp1.real, &comp1.imag);

    printf("Enter the second complex number's real and imaginary part: ");
    scanf("%d %d", &comp2.real, &comp2.imag);

    result = sum(comp1, comp2);
    printf("Answer: %d + %di", result.real, result.imag);

    return 0;
}

/*
OUTPUT:

Enter the first complex number's real and imaginary part: 1 2
Enter the second complex number's real and imaginary part: 1 3
Answer: 2 + 5i

*/