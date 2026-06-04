/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 10:25:44 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/06/04 10:33:52 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->next = NULL;
	while (lst)
		lst = lst->next;
	lst->next = node;
	return (node);
}
