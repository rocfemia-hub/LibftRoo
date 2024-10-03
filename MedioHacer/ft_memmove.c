/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roo <roo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:35:10 by rocfemia          #+#    #+#             */
/*   Updated: 2024/10/03 17:33:41 by roo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d[i] == '\0' && s[i] == '\0')
		return (0);
	i = 0;
	if (s >= d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while(i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (d);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Cerezas";
	char str2[] = "Picota";
	printf("%s\n", (char *)ft_memmove(str1, str2, 14));
	char str3[] = "Cerezas";
	char str4[] = "Picota";
	printf("%s\n", (char *)memmove(str3, str4, 14));
	return (0);
}