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
int main(int argc, char **argv)
{
    t_node *a;
    t_node *temp;

    a = NULL;

    // 1. Validação básica de argumentos
    if (argc < 2)
        return (0); // Se não tem argumentos, não faz nada
    
    // 2. Inicializa a stack (Parsing)
    // Passamos 'argv + 1' para pular o nome do programa
    stack_init(&a, argv + 1);

    // 3. TESTE: Imprime a lista para ver se funcionou
    printf("--- Stack A ---\n");
    temp = a;
    while (temp)
    {
        printf("Node: %d\n", temp->value);
        temp = temp->next;
    }
    printf("---------------\n");

    // 4. Limpa tudo (evita memory leaks)
    free_stack(&a);

    return (0);
}