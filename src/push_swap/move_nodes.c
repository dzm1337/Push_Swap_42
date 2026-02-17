#include "../../include/push_swap.h"

void    finish_rotation(t_node **stack, t_node *top_node, char stack_name)
{
    while (*stack != top_node)
    {
        if (stack_name == 'a')
        {
            if (top_node->above_median)
                ra(stack);
            else
                rra(stack);
        }
        else if (stack_name == 'b')
        {
            if (top_node->above_median)
                rb(stack);
            else
                rrb(stack);
        }
    }
}

static void rotate_both(t_node **a, t_node **b, t_node *cheapest_node)
{
    while (*b != cheapest_node->target && *a != cheapest_node)
    {
        if (cheapest_node->above_median && cheapest_node->target->above_median)
            rr(a, b);
        else if (!(cheapest_node->above_median) 
                && !(cheapest_node->target->above_median))
            rrr(a, b);
    }
    set_current_position(*a);
    set_current_position(*b);
}

void    move_a_to_b(t_node **a, t_node **b)
{
    t_node  *cheapest_node;

    cheapest_node = get_cheapest(*a);
    if (cheapest_node->above_median && cheapest_node->target->above_median)
        rotate_both(a, b, cheapest_node);
    else if (!(cheapest_node->above_median)
            && !(cheapest_node->target->above_median))
            rotate_both(a, b, cheapest_node);
    finish_rotation(a, cheapest_node, 'a');
    finish_rotation(b, cheapest_node->target, 'b');
    pb(b, a);
}

void    move_b_to_a(t_node **a, t_node **b)
{
    finish_rotation(a, (*b)->target, 'a');
    pa(a, b);
}