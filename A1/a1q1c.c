#include <stdio.h>

// Let n be a positive integer
// The n-th triangular number is a number of the form n*(n+1)/2
// This program computes any triangular number between 1 and 2^32
// Examples: a(1)=1, a(2)=3, a(3)=6, a(4)=10, ...
unsigned int nth_triangular_number(unsigned int n) {
    if (n >= 1 && n <= 92681) {
        return(n*(n + 1)/2);
    } else {
        printf("The value of n is either 0 or it is too large.\n");
        return 0;
    }
}