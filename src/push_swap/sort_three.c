#include "../../include/push_swap.h"

void    sort_three(t_node **a) // Sorts a stack of 3 nodes in a maximum of 2 moves
{
    t_node  *biggest_node;

    biggest_node = find_max(*a);
        // If the biggest node is at the top, move it to the bottom
    if (*a == biggest_node)
        ra(a);
            // If the biggest node is in the middle, move it to the bottom
    else if ((*a)->next == biggest_node)
        rra(a);
            // If the first node is larger than the second, swap them;
    if ((*a)->value > (*a)->next->value)
        sa(a);
}

void    min_on_top(t_node **a) // Moves the smallest number to the top of the stack
{
    t_node  *min_node;

    min_node = find_min(*a);
        // If the minimum is in the top half, rotate up
    if (min_node->above_median)
    {
        while (*a != min_node)
            ra(a);
    }
        // If the minimum is in the bottom half, rotate down
    else
    {
        while (*a != min_node)
            rra(a);
    }
}