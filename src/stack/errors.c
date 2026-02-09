
#include "../../include/push_swap.h"

bool error_duplicate(t_node *a, int n)
{
    if (!a)
        return (false);
    while (a)
    {
        if (a->value == n)
            return (true);
        a = a->next;
    }
    return (false);
}

void    free_stack(t_node   **stack)
{
    t_node  *temp;
    t_node  *current;

    if (!stack || !*stack)
        return ;
    current = *stack;
    while (current)
    {
        temp = current->next;
        free(current);
        current = temp;
    }
    *stack = NULL;
}

void    free_errors(t_node **a)
{
    free_stack(a);
    write(1, ERROR_MSG, 6);
    exit(1);
}