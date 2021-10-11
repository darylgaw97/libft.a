#include "libft.h"
#include <stdio.h>

static int numstrlen(int n);
static char *make_a(char *a, int n);

char *ft_itoa(int n)
{
    char *a;

    if (n == INT_MIN)
        return (ft_strdup("-2147483648"));
    a = malloc(numstrlen(n) + 1);
    if (a == NULL)
        return (NULL);
    return (make_a(a, n));
}

static char *make_a(char *a, int n)
{
    int i;

    i = 0;
    if (n < 0)
    {
        a[i] = '-';
        n *= -1;
        i = numstrlen(n) + 1;
    }
    else
        i = numstrlen(n);
    a[i] = '\0';
    i--;
    if (n == 0)
        a[i] = '0';
    while (n != 0)
    {
        a[i] = (n % 10) + '0';
        i--;
        n = n / 10;
    }
    return (a);
}

static int numstrlen(int n)
{
    int i;

    i = 1;
    if (n < 0)
    {
        n *= -1;
        i++;
    }
    while (n / 10 != 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}