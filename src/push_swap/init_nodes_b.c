#include "../../include/push_swap.h"

static  void    set_target_b(t_node *a, t_node *b)
{
    t_node  *current_a;
    t_node  *target_node;
    long    best_match_index;

    if (!a || !b)
        return ;
    while (b)
    {
        best_match_index = LONG_MAX;
        current_a = a;
        while (current_a)
        {
            if (current_a->value > b->value
            && current_a->value < best_match_index)
            {
                best_match_index = current_a->value;
                target_node = current_a;
            }
            current_a = current_a->next;
        }
        if (best_match_index == LONG_MAX)
            b->target = find_min(a);
        else
            b->target = target_node;
        b = b->next;
    }
}

void    init_nodes_b(t_node *a, t_node *b)
{
    set_current_position(a);
    set_current_position(b);
    set_target_b(a, b);
}