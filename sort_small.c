/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_small.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gianlucapirro <gianlucapirro@student.42      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 18:07:52 by gianlucapir   #+#    #+#                 */
/*   Updated: 2021/12/07 15:32:31 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_list *a)
{
	while (a->next)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}

void	sort_three(t_list *a)
{
	while (check_sorted(a) != 1)
	{
		if (a->data > a->next->data)
		{
			swap_top(a);
			ft_printf("SA\n");
		}
		else if (a->data > a->next->next->data)
		{
			reverse_rotate(&a);
			ft_printf("RRA\n");
		}
		else if (a->next->data > a->next->next->data)
		{
			swap_top(a);
			ft_printf("SA\n");
			reverse_rotate(&a);
			ft_printf("RRA\n");
		}
	}
}

void	*sort_four(t_list *a, t_list *b)
{
	a = push_top(a, &b);
	sort_three(a);
	if (a->data < b->data)
		push_top(b, &a);	
	return (a);
}