#include "../../include/push_swap.h"

void    stack_init(t_node **a, char **argv)
{
    long    n;
    int     i;

    i = 0;
    while (argv[i])
    {
        if (!(ft_isnumber(argv[i])))
            free_errors(a);
        n = ft_atol(argv[i]);
        if (n > INT_MAX || n < INT_MIN)
            free_errors(a);
        if (error_duplicate(*a, (int)n))
            free_errors(a);
        append_node(a, (int)n);
        i++;
    }
}