/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:52:14 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/05/26 19:16:24 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = 0;
	while (src[length] != '\0')
		length++;
	if (size == 0)
		return (length);
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}
