/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 13:32:30 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/06/02 16:24:43 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	decimal_value(int n);

char	*ft_itoa(int n)
{
	char	*itoa;
	size_t	sign;
	size_t	i;

	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign++;
	}
	i = decimal_value(n);
	itoa = malloc(i + sign + 1);
	while (n != 0)
	{
		itoa[sign + i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (sign > 0)
		itoa[0] = '-';
	return (itoa);
}

size_t	decimal_value(int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
