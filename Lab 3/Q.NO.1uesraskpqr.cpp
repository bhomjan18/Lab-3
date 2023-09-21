#include <stdio.h>

int main() {
    int p, q, r;

    // Get user input for p, q, and r
    printf("Enter the value of p (0 or 1): ");
    scanf("%d", &p);
    
    printf("Enter the value of q (0 or 1): ");
    scanf("%d", &q);
    
    printf("Enter the value of r (0 or 1): ");
    scanf("%d", &r);

    // Evaluate the expression
    int left_side = (p && !q) || r;
    int right_side = (!p) || r;
    int result = left_side <= right_side;

    // Print the result
    printf("(p=%d, q=%d, r=%d) -> %d\n", p, q, r, result);

    return 0;
}

