/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 03:58:04 by rocfemia          #+#    #+#             */
/*   Updated: 2024/10/03 20:10:01 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char	*o;

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