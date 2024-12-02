// 21. Check whether given number is palindrome.

#include<stdio.h>

int main() {
    int n, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;

    while (temp > 0) {
        int rem = temp % 10;
        rev = rev*10 + rem;
        temp /= 10;
    }

    if (n == rev) {
        printf("Number is Palindrome");
    } 
    else {
        printf("Number is not a Palindrome");
    }
    return 0;
}

/*
OUTPUT:

Enter a number: 121
Number is Palindrome
*/