/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:38:00 by rocfemia          #+#    #+#             */
/*   Updated: 2024/09/30 21:48:48 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int	i;
	int	sig;
	int	result;

	i = 0;
	sig = 1;
	result = 0;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sig = sig * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	result = result * sig;
	return (result);
}
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	result1;
	int	result2;
	result1 = ft_atoi("	 -+--1182b8");
	printf("%i\n", result1);
	result2 = atoi("	 -+--1182b8");
	printf("%i\n", result2);
}