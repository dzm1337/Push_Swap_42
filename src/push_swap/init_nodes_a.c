
#include "../../include/push_swap.h"

void    set_target_a(t_node *a, t_node *b)
{
    t_node  *current_b;
    t_node  *target_node;
    long    best_match_index;

    if (!a || !b)
        return ;
    while (a)
    {
        best_match_index = LONG_MIN; // set long min as reference
        current_b = b;
        while (current_b)
        {
            if (current_b->value < a->value
                && current_b->value > best_match_index) // if the current value of b is lower than the value of a
            {                                           // and the current value of b is best than the better value than we have now
                best_match_index = current_b->value;
                target_node = current_b;
            }   
            current_b = current_b->next;
        }
        if (best_match_index == LONG_MIN) // If no smaller number was found, the target is the maximum value in B (wrap around)
            a->target = find_max(b);
        else
            a->target = target_node;
        a = a->next;
    }
}

void    set_cost_a(t_node *a, t_node *b)
{
        int len_a;
        int len_b;

        if (!a || !b)
            return ;
        len_a = stack_len(a);
        len_b = stack_len(b);
        while (a)
        {
            a->cost = a->index;	// Cost to reach the top of A: index if above median, distance from bottom if below
            if (!(a->above_median))
                a->cost = len_a - (a->index);
            // Add cost to bring the target node to the top of B using the shortest path
            if (a->target)
            {
                if (a->target->above_median) // Moves needed using rb
                    a->cost += a->target->index;
                else // Moves needed using rrb
                    a->cost += len_b - (a->target->index);
            }
            a = a->next;
        }
}

void    init_nodes_a(t_node *a, t_node *b)
{
    set_current_position(a);
    set_current_position(b);
    set_target_a(a, b);
    set_cost_a(a, b);
    set_cheapest(a);
}