/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocfemia <rocfemia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 03:58:04 by rocfemia          #+#    #+#             */
/*   Updated: 2024/09/23 04:28:24 by rocfemia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
    const unsigned char *o;
    
    o = (const unsigned char *)s;
	i = 0;
	while (i <= n)
	{
		if (o[i] == c)
		{
			return ((void *)&o[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	printf("%s\n", (char *) ft_memchr("picota", 'c', 6));
	return (0);
}*/