#include "../../include/push_swap.h"

static void push(t_node **dest, t_node **src)
{
    t_node  *node;

    if (!*src || !src)
        return ;
    node = *src;
    *src = (*src)->next;
    if (*src)
        (*src)->prev = NULL;
    node->next = *dest;
    if (*dest)
        (*dest)->prev = node;
    *dest = node;
    node->prev = NULL;
}

void    pa(t_node **a, t_node **b)
{
    push(a, b);
    write(1, "pa\n", 3);
}

void    pb(t_node **a, t_node **b)
{
    push(b, a);
    write(1, "pb\n", 3);
}