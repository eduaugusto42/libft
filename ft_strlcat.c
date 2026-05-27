/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 19:25:56 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/05/26 22:43:41 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	j = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	while (i < size && dst[i] != '\0')
		i++;
	if (i >= size)
	{
		length += size;
		return (length);
	}
	else
		length += i;
	while (src[j] != '\0' && (i + j) < (size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (length);
}
