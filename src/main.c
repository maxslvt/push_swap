/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:23:10 by msolet-l          #+#    #+#             */
/*   Updated: 2025/03/13 19:07:55 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;
	int				len;
	bool			sorted;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (ft_putstr_fd("Error\n", 2), 1);
	else if (ac == 2)
	{
		av = split(av[1], ' ');
		if (!av)
			return (ft_putstr_fd("Error\n", 2), 1);
	}
	init_stack_a(&a, av + 1);
	len = stack_len(a);
	sorted = stack_sorted(a);
	if (!sorted)
		not_sorted(len, a, b);
	if (ac == 2)
		ft_freetab(av);
	free_stack(&a);
	return (0);
}
