#include <stdio.h>

int main() {
    int previous_term = 1;
    int current_term = 2;
    int next_term;
    int sum_even_terms = 0;

    while (current_term <= 4000000) {
        if (current_term % 2 == 0) {
            sum_even_terms += current_term;
        }
        next_term = previous_term + current_term;
        previous_term = current_term;
        current_term = next_term;
    }

    printf("%d\n", sum_even_terms);

    return 0;
}
