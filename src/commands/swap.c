#include "../../include/push_swap.h"

static void swap(t_node **stack)
{
    int temp_val;

    if (!*stack || !(*stack)->next)
        return ;
    temp_val = (*stack)->value;
    (*stack)->value = (*stack)->next->value;
    (*stack)->next->value = temp_val;
}

void    sa(t_node **a)
{
    swap(a);
    write(1, "sa\n", 3);
}

void    sb(t_node **b)
{
    swap(b);
    write(1, "sb\n", 3);
}

void    ss(t_node **a, t_node **b)
{
    swap(a);
    swap(b);
    write(1, "ss\n", 3);
}