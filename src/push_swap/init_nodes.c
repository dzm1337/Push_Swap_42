
#include "../../include/push_swap.h"

void    set_current_position(t_node *stack)
{
    int i;
    int median;

    if (!stack)
        return ;
    i = 0;
    median = stack_len(stack) / 2;
    while (stack)
    {
        stack->index = i;
        if (i <= median)
            stack->above_median = true;
        else
            stack->above_median = false;
        stack = stack->next;
        i++;
    }
}