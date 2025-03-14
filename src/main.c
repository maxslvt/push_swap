/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:23:10 by msolet-l          #+#    #+#             */
/*   Updated: 2025/03/14 19:10:32 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
#include <stdbool.h>

// Assuming t_stack_node is already defined
#include <stdio.h>
#include <stdbool.h>

// Assuming t_stack_node is already defined
void print_stack(const t_stack_node *node)
{
    while (node)
    {
        // printf("Node Address: %p\n", (void*)node);
        printf("Number: %d\n", node->nbr);
        // printf("Index: %d\n", node->index);
        // printf("Push Cost: %d\n", node->push_cost);
        // printf("Above Median: %s\n", node->above_median ? "true" : "false");
        // printf("Cheapest: %s\n", node->cheapest ? "true" : "false");
        // printf("Target Node Address: %p\n", (void*)node->target_node);
        // printf("Next Node Address: %p\n", (void*)node->next);
        // printf("Previous Node Address: %p\n", (void*)node->prev);
        printf("-------------------------\n");
        
        node = node->next;
    }
}

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;
	int				len;
	bool			sorted;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0])) // si 0 argument OU si 1 argument et qu'il est vide "\0"
		return (1);// Retire ft_putstr_fd("Error\n", 2),
	else if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		if (!av)
			return (ft_putstr_fd("Error\n", 2), 1);
	}
	printf("coucou\n");
	init_stack_a(&a, av + 1);
	len = stack_len(a);
	sorted = stack_sorted(a);
	if (!sorted)
		not_sorted(len, &a, &b);
	if (ac == 2)
		ft_freetab(av);
	free_stack(&a);
	return (0);
}
