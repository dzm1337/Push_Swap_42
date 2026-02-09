#include "../../include/push_swap.h"

t_node  *find_last(t_node *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}

void    append_node(t_node  **stack, int n)
{
    t_node  *node;
    t_node  *last_node;

    if (!stack)
        return ;
    node = malloc(sizeof(t_node));
    if (!node)
        return ;
    node->next = NULL;
    node->value = n;
    node->cost = 0;
    node->index = 0;
    node->target = NULL;
    if (*stack == NULL)
    {
        *stack = node;
        node->prev = NULL;
    }
    else
    {
        last_node = find_last(*stack);
        last_node->next = node;
        node->prev = last_node;
    }
}