/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-a <jcosta-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:31:56 by jcosta-a          #+#    #+#             */
/*   Updated: 2026/04/28 16:04:27 by jcosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// 17. t_lst **list ------- A -> B -> NULL 
// 21. new->next = *lst --- N -> A -> B -> NULL
// 22. *lst = new --------- 1st node of lst becomes N
