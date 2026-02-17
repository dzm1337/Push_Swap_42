#include "../include/push_swap.h"
/*
int main(int argc, char **argv)
{
    t_node  *a;
    t_node  *b;

    a = NULL;
    b = NULL;
    if (argc == 1 || argc == 2 && argv[!argv[1][0]])
        return (1);
    stack_init(argv + 1, argc == 2);
    if (!is_sorted(a))
    {
        if (stack_len(a) == 2)
            sa(&a, false);
        else if (stack_len(a) == 3)
            sort_three(&a);
        else
            sort_stacks(&a, &b);
    }
    free_stack(&a);
    return (0);
}
*/
void    print_status(t_node *a, t_node *b)
{
    t_node  *tmp;

    printf("\n----- STACK-A -----\n");
    tmp = a;
    while (tmp)
    {
        printf("Value: %d", tmp->value);
        if (tmp->prev)
            printf("->prev: %d", tmp->prev->value);
        else
            printf("->[prev: NULL]");
        printf("\n");
        tmp = tmp->next;
    }
    printf("\n----- STACK-B -----\n");
    tmp = b;
    while (tmp)
    {
        printf("Value: %d", tmp->value);
        if (tmp->prev)
            printf("->prev: %d", tmp->prev->value);
        else
            printf("->[prev: NULL]");
        printf("\n");
        tmp = tmp->next;
    }
	printf("----------------\n");
}

void    print_nodelen(t_node *stack, char *name)
{
    printf("\n--- %s ---\n", name);
    while (stack)
    {
        if (stack->above_median == true)
            printf("Value: %d | Index %d | Above Median: %s\n", stack->value, stack->index, "SIM");
        else
            printf("Value: %d | Index %d | Above Median: %s\n", stack->value, stack->index, "NAO");
        stack = stack->next;
    }
}

int main(int argc, char **argv)
{
    t_node  *a;
    t_node  *b;

    a = NULL;
    b = NULL;
    if (argc < 2)
        return (0);
    stack_init(&a, argv + 1);
    set_current_position(a);
    printf("TESTING WITH %d NUMBERS\n", stack_len(a)); // lenght of the stack
    print_nodelen(a, "STACK A"); // testing len/index/above_median
    //testing the commands
    printf("INICIAL STATUS (AFTER PARSER)");
    print_status(a, b);

    printf("\nEXECUTING pb, pb, sa (2 TIMES)\n");
    pb(&b, &a);
    pb(&b, &a);
    sa(&a);
    print_status(a, b);

    printf("\nEXECUTING ra (MOVE THE TOP TO THE END OF A)\n");
    ra(&a);
    print_status(a, b);

    printf("\nEXECUTING rra (END OF A BACK TO THE TOP)\n");
    rra(&a);
    print_status(a, b);

    printf("\nDOUBLE OPERATIONS: ss, rr, rra\n");
    ss(&a, &b);
    rr(&a, &b);
    rrr(&a, &b);
    print_status(a, b);

    printf("\nCLEANING EVERYTHING WITH PA...\n");
    while (b)
        pa(&a, &b);
    print_status(a, b);

    free_stack(&a);
    free_stack(&b);
    return (0);
}