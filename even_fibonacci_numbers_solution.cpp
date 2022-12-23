#include "even_fibonacci_numbers_solution.h"

// max = 4000000 answer = 4613732
int even_fibonacci_numbers_solution(int max) {

    int i = 1;
    int j = 2;
    int result = 0;

    while (j <= max) {
        if (j % 2 == 0) {
            result += j;
        }
        j += i;
        i = j - i;
    }

    return result;
}