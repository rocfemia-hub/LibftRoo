/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:38:00 by rocfemia          #+#    #+#             */
/*   Updated: 2024/10/03 15:37:20 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_overflow(unsigned long long num, int neg)
{
	if (neg == -1 && num > 9223372036854775807)
		return (0);
	if (neg == 1 && num > 9223372036854775807)
		return (-1);
	return (num);
}

int	ft_atoi(const char *nptr)
{
	int					i;
	int					sig;
	unsigned long long	result;

	i = 0;
	sig = 1;
	result = 0;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		sig = sig * -1;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	result = ft_overflow(result, sig);
	return (result * sig);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	result1;
	int	result2;
	result1 = ft_atoi("-2182b8");
	printf("%i\n", result1);
	result2 = atoi("-2182b8");
	printf("%i\n", result2);
}*/