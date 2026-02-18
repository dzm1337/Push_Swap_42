#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	char	**args;

	a = NULL;
	b = NULL;
	//Basic verification 
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (0);
	
	//Split vs Argv
	if (argc == 2)
		args = ft_split(argv[1], ' '); // Create an array of strings from the only string
	else
		args = argv + 1; // use the argv itself skipping the name of the program

	// Inicializing the stack
	stack_init(&a, args);

	//  If we use split we free the memory allocated
	if (argc == 2)
		free_matrix(args);

	//Algorithm
	if (!is_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}

	// Clean the stacjs
	free_stack(&a);
	free_stack(&b);
	return (0);
}