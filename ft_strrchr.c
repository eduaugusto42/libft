/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 09:13:10 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/05/27 12:00:00 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (1)
	{
		if (*s == c)
			last = (char *)s;
		if (*s == '\0')
			break;
		s++;
	}
	return (last);
}
