/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gianlucapirro <gianlucapirro@student.42      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 12:20:25 by gianlucapir   #+#    #+#                 */
/*   Updated: 2021/12/07 15:27:08 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft/libft.h"
# include "list/list.h"
# include "actions/actions.h"
# include "printf/includes/ft_printf.h"

int		input_checker(char *argv[]);
t_list	*input_to_linked_list(char *argv[], t_list *a);
int		check_sorted(t_list *a);
void	sort_three(t_list *a);
void	*sort_four(t_list *a, t_list *b);

#endif