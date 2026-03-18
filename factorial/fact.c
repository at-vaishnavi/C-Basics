#include<stdio.h>

// function to calculate factorial
int fact(int n)
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = fact(n);  // function call
    printf("Factorial = %d", result);
    return 0;
}
