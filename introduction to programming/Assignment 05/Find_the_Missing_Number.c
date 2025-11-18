/*
Given the multiplication of four numbers and three of those numbers, find the missing number.

Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.

Input Format

The first line will contain T, number of test cases.
For every test case, the input will contain one integer M (the multiplication of the four numbers), A, b, C (three of those four numbers).
*/

#include<stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);

    while (n--) {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int multi = a * b * c;

        if (multi == 0) {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        } 
        else {
            if (m % multi == 0)
            {
                printf("%lld\n", m / multi);
            }
            else
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}
