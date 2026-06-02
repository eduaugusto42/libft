/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:06:17 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/05/25 14:15:22 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // colocar em um outro arquivo

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s)
		i++;
	return (i);
}
