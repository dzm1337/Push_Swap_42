#include "../../include/push_swap.h"

t_node  *get_cheapest(t_node *stack)
{
    if (!stack)
        return (NULL);
    while (stack)
    {
        if (stack->cheapest)
            return (stack);
        stack = stack->next;
    }
    return (NULL);
}

bool    is_sorted(t_node *stack)
{
    if (!stack)
        return (true);
    while (stack->next)
    {
        if (stack->value > stack->next->value)
            return (false);
        stack = stack->next;
    }
    return (true);
}

void    set_cheapest(t_node *stack)
{
    long    cheapest_value;
    t_node  *cheapest_node;
    
    if (!stack)
        return ;
    cheapest_value = LONG_MAX; // incialize with the largest possible value to find the minimum
    cheapest_node = NULL; // incialize the node;
    while (stack)
    {
        stack->cheapest = false; // reset the flag to false
        if (stack->cost < cheapest_value) // if current node's cost is lower than our current value, update the cheapest node;d
        {
            cheapest_value = stack->cost;
            cheapest_node = stack;
        }
        stack = stack->next;
    }
    // after checking the whole stack, mark the cheapest as winner/cheapest idk
    if (cheapest_node)
        cheapest_node->cheapest = true;
}

void    set_current_position(t_node *stack)
{
    int i;
    int median;

    if (!stack)
        return ;
    i = 0;
    median = stack_len(stack) / 2;	// Define the median point to decide the shortest path to the top   
    while (stack)
    {
        stack->index = i;
        if (i <= median) 		// Determine if the node is closer to the top (above) or to the bottom (below)
            stack->above_median = true;
        else
            stack->above_median = false;
        stack = stack->next;
        i++;
    }
}