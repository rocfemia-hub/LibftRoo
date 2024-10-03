/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 05:33:58 by roo               #+#    #+#             */
/*   Updated: 2024/10/03 20:10:15 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	char	*aux1;
	char	*aux2;

	aux1 = (char *)s1;
	aux2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (aux1[i] > aux2[i])
			return (1);
		else if (aux1[i] < aux2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%i\n", ft_memcmp("Patata", "Patatita", 9));
	printf("%i\n", memcmp("Patata", "Patatita", 9));
	return(0);
}*/