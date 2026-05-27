/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:35:59 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/05/26 18:51:29 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
