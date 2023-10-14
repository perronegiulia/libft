/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaia-pe <gmaia-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:55:12 by gmaia-pe          #+#    #+#             */
/*   Updated: 2023/10/14 14:55:20 by gmaia-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_lst)
{
	t_list	*temp;

	if (!lst || !new_lst)
		return ;
	if (!*lst)
	{
		*lst = new_lst;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new_lst;
}
