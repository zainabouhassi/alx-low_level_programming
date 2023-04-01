#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);

	n = _strlen_recursion("You mustn't be afraid to dream a little bigger, darling.");
	printf("%d\n", n);

	n = _strlen_recursion("Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange.");
	printf("%d\n", n);

	n = _strlen_recursion("");
	printf("%d\n", n);

    return (0);
}
