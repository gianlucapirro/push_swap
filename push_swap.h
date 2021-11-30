/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gianlucapirro <gianlucapirro@student.42      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/29 12:20:25 by gianlucapir   #+#    #+#                 */
/*   Updated: 2021/11/30 15:24:23 by gpirro        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft/libft.h"
# include "list/list.h"
# include "actions/actions.h"

int     input_checker(char *argv[]);
t_list	*input_to_linked_list(char *argv[], t_list *a);

#endif