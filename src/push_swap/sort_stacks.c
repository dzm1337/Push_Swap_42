
#include "../../include/push_swap.h"

void    sort_stacks(t_node **a, t_node **b)
{
    int     len_a;
    
    len_a = stack_len(*a);
        // Push the first two nodes from A to B to start the process
    if (len_a-- > 3 && !(is_sorted(*a)))
        pb(b, a);
    if (len_a-- > 3 && !(is_sorted(*a)))
        pb(b, a);
            // Push nodes from A to B until only 3 nodes remain in A
    while (len_a-- > 3 && !(is_sorted(*a)))
    {
            init_nodes_a(*a, *b);
            move_a_to_b(a, b);
    }
        // Sort the last 3 nodes in Stack A
    sort_three(a);
        // Move all nodes from B back to A in the correct order
    while (*b)
    {
        init_nodes_b(*a, *b);
        move_b_to_a(a, b);
    }
        // Make sure the smallest number is at the top of Stack A
    set_current_position(*a);
    min_on_top(a);
}