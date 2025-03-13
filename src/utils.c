/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolet-l <msolet-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:59:02 by msolet-l          #+#    #+#             */
/*   Updated: 2025/03/13 19:05:41 by msolet-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	not_sorted(int len, t_stack_node *a, t_stack_node *b)
{
	if (len == 2)
		sa(&a, false);
	else if (len == 3)
		sort_three(&a);
	else
		sort_stacks(&a, &b);
}
