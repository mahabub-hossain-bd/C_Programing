#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 40;
    int b = 30;
    // >
    bool a_is_greater = a > b;
    printf("A is greater than B - %d\n", a_is_greater);
    //<
    int c = 45;
    int d = 50;
    bool c_is_smaller = c < d;
    printf("C is smaller than D- %d\n", c_is_smaller);
    // ==
    bool a_is_b = a == b;
    printf("A is B -%d\n", a_is_b);
    // !=
    bool a_is_not_b = a != b;
    printf("A is Not B - %d\n", a_is_not_b);
    int e = 15;
    int f = 20;
    bool e_is_greater = e > f;
    printf("E is greater Than D-%d\n", e_is_greater);

    bool e_is_greater_equal = e >= f;
    printf("E is greater or Equal - %d\n", e_is_greater_equal);

    bool e_is_smaller = e < f;
    printf("E is Smaller Than F-%d\n", e_is_smaller);

    bool e_is_smaller_equal = e <= f;
    printf("E is Smaller or Equal - %d\n", e_is_smaller_equal);
    return 0;
}